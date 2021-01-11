// 외벽 점검
// https://programmers.co.kr/learn/courses/30/lessons/60062

import Foundation

func solution(_ n:Int, _ weak:[Int], _ dist:[Int]) -> Int {
    var leftFriend = -1
    
    func findCanGo(_ n:Int, _ weak:[Int], _ dist:Int) -> [Int]
    {
        var startDist = weak.first ?? 0
        var dist = dist
        for w in weak.enumerated()
        {
            if dist - (w.element - startDist) < 0
            {
                return Array(weak[w.offset...])
            }
            dist -= (w.element - startDist)
            startDist = w.element
        }
        return []
    }

    func recur(_ n:Int, _ weak:[Int], _ dist:[Int])
    {
        for i in 0..<weak.count
        {
            var tmp = weak[i...]
            tmp.append(contentsOf: weak[0..<i].map{$0+n})
            let retWeak = findCanGo(n,Array(tmp),dist.first ?? 0)
            
            if retWeak.isEmpty
            {
                leftFriend = max(dist.count,leftFriend)
            }
            else{
                recur(n, retWeak, Array(dist[1...]))
            }
        }
    }
    recur(n, weak, dist.sorted().reversed())
    
    return dist.count - leftFriend + 1
}

solution(12, [1, 5, 6, 10], [1, 2, 3, 4]) // 2
solution(12, [1, 3, 4, 9, 10], [3, 5, 7]) // 1
solution(200, [0, 100], [1,1]) // 2
solution(200, [0, 10, 50, 80, 120, 160], [1, 10, 5, 40, 30]) // 3
solution(50, [1], [6]) // 1

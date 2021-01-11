// 조이스틱
// https://programmers.co.kr/learn/courses/30/lessons/42860

func getMinimumMoveCount(_ array:[Int]) -> Int
{
    var moveCount = Int.max
    for i in 0..<array.count
    {
        var tmp = array[i...]
        tmp.append(contentsOf: array[0..<i])
        
        while true{
            guard let last = tmp.last, last == 0 else {break}
            tmp.removeLast()
        }
//        print(tmp,tmp.count,i)
//        moveCount = max(0,min(tmp.count - 1 + i,moveCount))
        moveCount = max(0,min(tmp.count - 1,moveCount))
    }
    return moveCount
}
func solution(_ name:String) -> Int {
    let posA = Int("A".first!.asciiValue!)
    let totalCntAlpha = Int("Z".first!.asciiValue!) - posA + 1
    let table:[Int] = name.map{
        let c = Int($0.asciiValue!) - posA
        if c - totalCntAlpha/2 < 0 { return c }
        else { return totalCntAlpha - c }
    }
    
    let alphaCount = table.reduce(0){$0 + $1}
    let moveCount = getMinimumMoveCount(table)
    let reversedMoveCount = getMinimumMoveCount(table.reversed())
    
    return alphaCount + min(moveCount,reversedMoveCount)
}


print(solution("JEROEN")) // 56
print(solution("AAA")) // 0
print(solution("JAN")) // 23

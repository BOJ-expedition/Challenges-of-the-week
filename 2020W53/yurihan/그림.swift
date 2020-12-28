// 제출 코드
// https://www.acmicpc.net/source/24685767

import Foundation

let counts = (readLine() ?? "").components(separatedBy:" ")
let w = Int(counts[1]) ?? 0
let h = Int(counts[0]) ?? 0

var paper = (0..<h).map{ _ in (readLine() ?? "").components(separatedBy:" ").map{Int($0) ?? 0} }

func findNext(_ x:Int, _ y:Int) -> Int
{
    guard (0..<h) ~= y, (0..<w) ~= x, paper[y][x] == 1 else {return 0}
    var ret = 1
    paper[y][x] = 2
    
    ret += findNext(x-1, y)
    ret += findNext(x, y-1)
    ret += findNext(x, y+1)
    ret += findNext(x+1, y)
    
    return ret
}

var maximumSize = 0
var totalCnt = 0

for y in (0..<h){
    for x in (0..<w){
        let size = findNext(x,y)
        maximumSize = max(size,maximumSize)
        totalCnt += size > 0 ? 1 : 0
    }
}

print("\(totalCnt)\n\(maximumSize)")




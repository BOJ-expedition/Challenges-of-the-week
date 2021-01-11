// 삼각 달팽이
// https://programmers.co.kr/learn/courses/30/lessons/68645

import Foundation


func getAS(_ n: Int) -> Int
{
    return n*(1+n)/2
}
enum Direction
{
    case down,right,up
    func nextDirection() -> Self
    {
        switch self {
        case .down:
            return .right
        case .right :
            return .up
        case .up :
            return .down
        }
    }
    func nextIndex(_ currentFloor:inout Int, index:Int) -> Int
    {
        switch self {
        case .down:
            let ret =  index+currentFloor
            currentFloor += 1
            return ret
        case .right :
            return index + 1
        case .up :
            let ret = index-currentFloor
            currentFloor -= 1
            return ret
        }
    }
}
func solution(_ n:Int) -> [Int] {
    
    var arr = [Int](repeating: 0, count: getAS(n))
    
    var currentIndex = 0
    var direction:Direction = .down
    var currentNum = 1
    var floor = 1
    for i in 0..<n
    {
        for j in 0..<(n-i)
        {
            arr[currentIndex] = currentNum
            currentNum += 1
            if j != n - i - 1
            {
                let nextIndex = direction.nextIndex(&floor, index: currentIndex)
                currentIndex = nextIndex
            }
        }
        direction = direction.nextDirection()
        currentIndex = direction.nextIndex(&floor, index: currentIndex)
    }
    return arr
}

print(solution(5))
//0,1,3,6,7,8,9


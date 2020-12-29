// 두 개 뽑아서 더하기
// https://programmers.co.kr/learn/courses/30/lessons/68644

import Foundation

func solution(_ numbers:[Int]) -> [Int] {
    var ret: Set<Int> = []
    for i in 0..<(numbers.count-1)
    {
        for j in (i+1)..<(numbers.count)
        {
            ret.insert(numbers[i]+numbers[j])
        }
    }
    return Array<Int>(ret).sorted()
}

print(solution([2,1,3,4,1])) // [2,3,4,5,6,7]
print(solution([5,0,2,7])) // [2,5,7,9,12]

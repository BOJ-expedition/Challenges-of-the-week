// 스킬트리
// https://programmers.co.kr/learn/courses/30/lessons/49993

import Foundation

func solution(_ skill:String, _ skill_trees:[String]) -> Int {
    var lookup:[Character:Int] = [:]
    skill.enumerated().forEach{lookup[$0.element] = $0.offset}
    // -> ['C':0, 'B':1, 'D':2]
    
    let ret = skill_trees.reduce(0){ ret, tree in
        var orders:[Int] = []
        tree.forEach{
            guard let orderNum = lookup[$0] else {return}
            orders.append(orderNum)
        }
        // "BACDE" -> [1,0,2] / "CBADF" -> [0,1,2] / "AECB" -> [0,1]
                                    
        for (o,e) in orders.enumerated()
        {
            guard o == e else {return ret}
            // "BACDE" -> [1,0,2] -> [(0,1),(1,0),(2,2)] -> false
            // "CBADF" -> [0,1,2] -> [(0,0),(1,1),(2,2)] -> true
            // "AECB" -> [0,1] -> [(0,0),(1,1)] -> true
        }
        return ret + 1
    }
    
    return ret
}

print(solution("CBD", ["BACDE", "CBADF", "AECB", "BDA"])) // -> 2

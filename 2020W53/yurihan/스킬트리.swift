// 스킬트리
// https://programmers.co.kr/learn/courses/30/lessons/49993

import Foundation

func solution(_ skill:String, _ skill_trees:[String]) -> Int {
    var lookup:[Character:Int] = [:]
    skill.enumerated().forEach{lookup[$0.element] = $0.offset}
    let ret = skill_trees.reduce(0){ ret, tree in
        var orders:[Int] = []
        tree.forEach{
            guard let orderNum = lookup[$0] else {return}
            orders.append(orderNum)
        }
        for (o,e) in orders.enumerated()
        {
            guard o == e else {return ret}
        }
        return ret + 1
    }
    
    return ret
}

print(solution("CBD", ["BACDE", "CBADF", "AECB", "BDA"]))

// 위장
// https://programmers.co.kr/learn/courses/30/lessons/42578

import Foundation

func solution(_ clothes:[[String]]) -> Int {
    var clothesDic:[String:Int] = [:]
    clothes.forEach{ clothesDic[$0[1]] = (clothesDic[$0[1]] ?? 0) + 1 }
    return clothesDic.reduce(1){$0 * ($1.value+1)} - 1
}

print(solution([["yellow_hat", "headgear"], ["blue_sunglasses", "eyewear"], ["green_turban", "headgear"]])) // -> 5
print(solution([["crow_mask", "face"], ["blue_sunglasses", "face"], ["smoky_makeup", "face"]])) // -> 3

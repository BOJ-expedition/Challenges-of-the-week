// https://programmers.co.kr/learn/courses/30/lessons/12914

func solution(_ n:Int) -> Int
{
    let MOD: Int = 1234567
    var arr = [Int](repeating: 0, count: 2001)
    
    arr[1] = 1
    arr[2] = 2
    
    if (n == 1) {
        return arr[1]
    }
    
    else if (n == 2) {
        return arr[2]
    }
    
    else {
        for i in 3...n {
            arr[i] = (arr[i-1] + arr[i-2]) % MOD
        }
        
        return arr[n]
    }
}
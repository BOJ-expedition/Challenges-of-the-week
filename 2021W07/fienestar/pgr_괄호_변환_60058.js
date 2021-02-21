/*
    괄호 변환
    https://programmers.co.kr/learn/courses/30/lessons/60058
*/

function extract_balanced_string(s)
{
    let bracket = 0
    for(let i=0;i!=s.length;++i){
        if(s[i] == '(')
            ++bracket
        else if(s[i] == ')')
            --bracket
        else
            throw Error('인자로 오는 문자열은 반드시 (와 )로 구성되어야합니다.')
        if(bracket == 0)
            return [s.slice(0,i+1),s.slice(i+1)]
    }
    throw Error("인자로 오는 문자열에서 (와 )의 개수는 같아야합니다.")
}

function isValid(s)
{
    let bracket = 0
    for(let i=0;i!=s.length;++i){
        if(s[i] == '(')
            ++bracket
        else if(s[i] == ')')
            --bracket
        
        if(bracket < 0)
            return false
    }
    return bracket == 0
}

function solution(p) {
    if(!p)return ''
    
    let extracted = extract_balanced_string(p)
    let u = extracted[0]
    let v = extracted[1]
        
    if(isValid(u))
        return u + solution(v) 
    
    let s = '('+solution(v)+')'
    s += u.slice(1,u.length-1).split('').map(v=>({'(':')',')':'('})[v]).join('')
    return s
}
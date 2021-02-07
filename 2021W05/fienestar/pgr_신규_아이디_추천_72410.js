/*
    신규 아이디 추천
    https://programmers.co.kr/learn/courses/30/lessons/72410
*/

function solution(new_id) {
    new_id = new_id.toLowerCase()
    new_id = new_id.replace(/[^a-z0-9\-_.]/g,'')
    new_id = new_id.replace(/\.{2,}/g,'.')
    new_id = new_id.slice(+new_id.startsWith('.'))
    new_id = new_id.slice(0,new_id.length - new_id.endsWith('.'))
    new_id = new_id || 'a'
    new_id = new_id.slice(0,15)
    new_id = new_id.slice(0,new_id.length - new_id.endsWith('.'))
    new_id += new_id[new_id.length - 1].repeat(Math.max(0,3-new_id.length))
    return new_id;
}
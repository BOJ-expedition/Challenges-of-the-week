/*
    순위
    https://programmers.co.kr/learn/courses/30/lessons/49191
*/

function count_sub(players, player_idx, subname)
{
    let check = new Array(players.length)
    let q = [player_idx]
    let count = 0

    check[player_idx] = true
    
    while(q.length){
        let player_idx = q.pop()
        let player = players[player_idx]
        
        for(let i in player[subname]){
            let k = player[subname][i]
            if(!check[k]){
                check[k] = true
                q.push(k)
                ++count
            }
        }
                
    }
    return count
}

function solution(n, results) {
    
    let players = []
    for(let i=0;i != n; ++i)
        players.push({winner: [], loser: []})
    
    for(let i in results){
        let winner = results[i][0]-1
        let loser = results[i][1]-1
        players[winner].loser.push(loser)
        players[loser].winner.push(winner)
    }
    
    let answer = 0
    
    for(let i in players)
    {
        let win = count_sub(players,i,'winner')
        let lose = count_sub(players,i,'loser')
        answer += (win + lose + 1 == n)
    }
    
    return answer
}
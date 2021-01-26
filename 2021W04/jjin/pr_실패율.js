// https://programmers.co.kr/learn/courses/30/lessons/42889

// 어거지로 한번 풀고 리팩토링을 한번 했는데 생각보다 시간차이가 많이 나더라.
// 1차 코테 넘어가면 소스 뜯어본다니까 잘쓰는 습관도 중요할듯...

function solution(N, stages) {
    let eachStage = [];

    for(let stage=0; stage<N; stage++){
        eachStage[stage]={ distribution:(stage+1) };
        let blockedUserOnNow = 0;
        let passedUserOnNow = 0;

        for(let user=0; user<stages.length; user++){
            const userStageNow = stages[user]-1;

            if(stage < userStageNow)
                passedUserOnNow++;
            else if( stage === userStageNow)
                blockedUserOnNow++;
        }

        eachStage[stage].failureRate = blockedUserOnNow / ( blockedUserOnNow+ passedUserOnNow);
    }

    eachStage.sort( (a,b)=> b.failureRate-a.failureRate);

    return eachStage.map( elem => elem.distribution);
}

console.log( solution(5, [2, 1, 2, 6, 2, 4, 3, 3]) )
console.log( solution(4, [4, 4, 4, 4, 4]) )
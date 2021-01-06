// https://programmers.co.kr/learn/courses/30/lessons/49993?language=javascript

function solution(skill, skill_trees) {
    const BIsInA = (string, char) => {
        for(let i=0; i<string.length; i++){
            if(string[i] === char){
                return i;
            }
        }
        return -1;
    }

    let answer = 0;

    for(let i=0; i<skill_trees.length; i++){
        const thisSkill = skill_trees[i];

        const firstV = BIsInA(thisSkill, skill[0]);
        const beEmpty = firstV < 0;

        let curIndex = beEmpty ? firstV : -1;

        for(let j=1; j<skill.length; j++){
            const char = skill[j];
            const prevChar = skill[j-1];
            const chkNow = BIsInA(thisSkill, char);
            const chkPrev = BIsInA(thisSkill, prevChar);

            if(beEmpty){ // 비어있어야 함
                if(chkNow>=0){ // 근데 안비어있음
                    curIndex = -2;
                    break;
                }
            }else{ // 스킬트리체크 해야함
                if(chkNow === - 1) continue; // 안찍을 수도 있음. 일단 넘김

                const canBeNext = chkNow > curIndex && chkNow >= chkPrev;

                if(canBeNext && chkPrev === -1){ //찍을 수 있는 스킬인데 이전 스킬을 안찍었을 경우
                    curIndex = -2;
                    break;
                }
                else if(canBeNext){ // 이전 스킬을 찍은 뒤에 찍을 수 있는 스킬인 경우
                    curIndex = chkNow
                }
                else{ // 그 밖에
                    curIndex = -2;
                    break;
                }

            }
        }

        if(curIndex>=-1)answer++;
    }

    return answer;
}
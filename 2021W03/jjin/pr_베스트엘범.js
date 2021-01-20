// https://programmers.co.kr/learn/courses/30/lessons/42579

// ?? 효율성 검사를 안하네 틀릴 줄 알았는데.

function solution(genres, plays) {
    let items = {};

    for (let i = 0; i < genres.length; i++) {
        const category = genres[i];
        const count = plays[i];
        const obj = {count:count, index:i};

        if(items[category]){
            items[category].push(obj);
        }
        else{
            items[category] = [obj];
        }
    }

    let list = [];

    for(const [key, value] of Object.entries(items)){
        const sum = value.reduce( (a,b) => {
            return {count:a.count + b.count}
        })

        list.push( {category:key, list : value, order:sum});
    }

    list.sort( (a,b)=> b.order.count -a.order.count);

    let answer = [];
    list.forEach( (elem)=>{
        elem.list.sort( (a,b)=>b.count-a.count).slice(0, 2).forEach( (element)=>{
            answer.push(element.index)
        });

    });

    return answer;
}

console.log(solution(["classic", "pop", "classic", "classic", "pop"], [500, 600, 150, 800, 2500]))
function solution(priorities, location) {
    let items = priorities.map( (level, index)=> {
        return {level:level, index:index}
    });
    let rst = [];

    while(items.length){
        let now = items.shift();
        let idx = items.findIndex( (elem)=> elem.level>now.level);

        if(idx>=0){
            items.push(now);
        }
        else{
            rst.push(now);
        }
    }

    return rst.findIndex( (elem)=>elem.index===location)+1;
}

solution([1, 1, 9, 1, 1, 1], 0)
solution([2, 1, 3, 2], 2)
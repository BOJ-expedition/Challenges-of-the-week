function solution(record) {
    const items = record.map( (elem)=> elem.split(" ") );

    let users = {};

    const userBase = items.filter( (elem)=>elem[2] );
    userBase.forEach( (item)=>{
        const v = {id:item[1], name:item[2]};
        users[v.id]=v.name;
    });

    let strings = items.map( (elem)=>{
        if(elem[0] === "Enter")
            return `${users[elem[1]]}님이 들어왔습니다.`;
        else if(elem[0] === "Leave")
            return `${users[elem[1]]}님이 나갔습니다.`;
        else
            return null;

    }).filter( (elem) => elem != null );

    return strings;
}

console.log( solution(["Enter uid1234 Muzi", "Enter uid4567 Prodo", "Leave uid1234", "Enter uid1234 Prodo", "Change uid4567 Ryan"]) );
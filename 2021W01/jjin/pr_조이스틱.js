// //https://programmers.co.kr/learn/courses/30/lessons/42860
let name ="DAZAAAAAAAAZAZA"
let answer = 0;

let lastCharIdx = 0;

for(let i=name.length-1; i>=0; i--){
    if( name[i] !== "A") {
        lastCharIdx = i;
        break;
    }
}

const getDY =(char)=>{
    const charCodeOfN = 78;
    const charCode = char.charCodeAt(0);
    let y;
    if(charCode < charCodeOfN) y = charCode-65;
    else                       y = 90-charCode+1;
    return y;
}

for(let x=0; x<name.length; x++){
    if(x<0) x = name.length+x;
    let char = name[x];

    answer += getDY(char);

    const from = x;
    for(let to=from+1; to<name.length; to++){
        const nextChar = name[to];
        if(nextChar && nextChar !== "A"){
            const toLeft = name.length-lastCharIdx+from;
            const toRight = to-from;
            //console.log(from, to, toLeft < toRight)
            const x = toLeft < toRight ? toLeft : toRight;
            answer += x;
            break;
        }
        else{
            x++;
        }
    }
}
console.log(answer)
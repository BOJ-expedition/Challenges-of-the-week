// let files = ["img09.png", "img10.png", "img02.png", "img1.png", "IMG01.GIF", "img2.JPG"];
    let files = [".123", "a321", "a1", "a0",   "ff1", "FF0001"]

let answer = files.slice(0, files.length);

const splitter = (fileName) => {        // tail은 신경쓸 필요가 없음. [head, body]를 리턴해주는 함수
    let name = fileName.toString();
    let endOfHead = 0;
    let endOfBody = 0;

    for(let i=0; i<name.length; i++){
        const char = name[i];
        const isNumber = !isNaN(char) && char !== " ";

        if(endOfHead===0 && isNumber)
            endOfHead = i;
        else if(endOfHead>0 && !isNumber){
            endOfBody = i;
            break;
        }

        if(i===fileName.length-1) endOfBody = i+1; // 아오 ㅋㅋ
    }

    return [
        name.substring(0, endOfHead).toLowerCase(),     //string
        +name.substring(endOfHead, endOfBody)           //number
    ]
}

answer.sort( (a,b) => {
    const prev = splitter(a);
    const next = splitter(b);

    const headCompare = prev[0].localeCompare(next[0]);

    if(headCompare === 0){
        return prev[1] - next[1] || 0;
    }
    else{
        return headCompare
    }
})

console.log(answer);
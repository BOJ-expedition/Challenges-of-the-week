// https://programmers.co.kr/learn/courses/30/lessons/17681

function solution(n, arr1, arr2){
    const toBit = (number) =>{
        let string = []

        while(number){
            string.push( number%2 )
            number = number >> 1
        }

        string.reverse()

        return string.length === n ? string.join("") : new Array( n-string.length).fill(0).concat(string).join("")
    }

    const array1 = arr1.map( elem=>toBit(elem))
    const array2 = arr2.map( elem=>toBit(elem))

    let ret = [];

    for(let i=0; i<n; i++){
        ret[i] = []
        for(let j=0; j<n; j++){
            if( array1[i][j] === "1" || array2[i][j] === "1" )
                ret[i][j] = "#"
            else
                ret[i][j] = " "
        }
        ret[i] = ret[i].join("")
    }

    return ret;
}

console.log( solution(5, [9, 20, 28, 18, 11], [30, 1, 21, 17, 28]) )
console.log( solution(6, [46, 33, 33, 22, 31, 50], [27, 56, 19, 14, 14, 10]) )
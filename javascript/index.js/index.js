let random=Math.random();
console.log(random)
a=prompt("enter any number")
c=prompt("enter any operation")
b=prompt("enter any number")
obj={
    '+':'-',
    '-':'/',
    '/':'**'

}

if (random >0.1){
     alert(`the result is ${eval(`${a} ${c} ${b}`)}`)
}
else{
c=obj[c];
alert(`the result is ${eval(`${a} ${c} ${b}`)}`)

}
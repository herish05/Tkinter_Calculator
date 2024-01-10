
function Adjectives(a,b,c){
   const randomIndex=Math.floor(Math.random()*3);
   let randomAdjectives;
   switch(randomIndex){
    case 0:
        randomAdjectives=a;
        break;
    case 1:
        randomAdjectives=b;
        break;
    
    case 2:
        randomAdjectives=c;
        break;
    
    default:
        randomAdjectives=undefined
        break;
    
   }
   return randomAdjectives

}
x=Adjectives("Crazy","Amazing","Fire");
function shopname(a,b,c){
   const randomIndex=Math.floor(Math.random()*3);
   let randomName;
   switch(randomIndex){
    case 0:
        randomName=a;
        break;
    case 1:
        randomName=b;
        break;
    
    case 2:
        randomName=c;
        break;
    
    default:
        randomName=undefined
        break;
    
   }
   return randomName

}
y=shopname("Engine","Foods","Garments");

function AnotherName(a,b,c){
    const randomIndex=Math.floor(Math.random()*3);
    let randomAnother;
    switch(randomIndex){
     case 0:
         randomAnother=a;
         break;
     case 1:
         randomAnother=b;
         break;
     
     case 2:
         randomAnother=c;
         break;
     
     default:
         randomAnother=undefined
         break;
     
    }
    return randomAnother
 
 }
 z=AnotherName("Bros","Limited","Hub");
const result=(`Random Business Name is ${x} ${y} ${z}`)
console.log(result)
 

#include<stdio.h>
int main(){
    int num,sum=0,product=1;
    printf("enter any number");
    scanf("%d",&num);
    while(num>0){
    int temp=num%10;
    sum+=temp;
    product*=temp;
    num=num/10;
}    
if(sum==product){
    printf("number is perfect");
}
else{
    printf("number is not perfect");
}
}
#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0,temp;
    printf("enter any number ");
    scanf("%d",&num);
    int length=0;
    int num1=num;
    int res=num;
    while(num>0){
        num=num/10;
        length++;
    }

    while(num1>0){
         temp=num1%10;
        sum=sum+pow(temp,length);
        num1=num1/10;
        
    }
    if(sum+1==res){
        printf("number is armstrong ");
    }
    else{
        printf("number is not armstrong");
    }
}
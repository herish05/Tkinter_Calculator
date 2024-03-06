#include<stdio.h>
int main(){
    int num,temp,res=0;
   
    printf("enter any number");
    scanf("%d",&num);
     temp=num;
    while(temp!=0){
        int temp1=temp%10;
        res=res*10+temp1;
        temp=temp/10;
    }
    
    if(res==num){
        printf("number is palindrome");
    }
    else{
        printf("number is not palindrome");
    }

}
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter first number");
    scanf("%d",&num1);
     printf("enter first number");
    scanf("%d",&num2);
     printf("enter first number");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("Greatest number is %d",num1);
    }
     else if(num2>num1 && num2>num3){
        printf("Greatest number is %d",num2);
    }
    else if(num3>num1 && num3>num2){
        printf("Greatest number is %d",num3);
    }
    return 0;


}
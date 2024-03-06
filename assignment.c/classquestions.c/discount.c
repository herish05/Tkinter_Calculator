#include<stdio.h>
int main(){
    int purchase;
    printf("enter purchase amount");
    scanf("%d",&purchase);
    if(purchase>1000){
        int amount=purchase-(purchase*0.1)+1;
        printf("Amount to paid after discount is %d",amount);
    }
    else{
        printf("Amount to paid is %d",purchase);
    }
    }
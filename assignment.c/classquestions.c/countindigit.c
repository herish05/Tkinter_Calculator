#include<stdio.h>
int main(){
    int num,i=0;
    printf("enter any number");
    scanf("%d",&num);
    do{
        num/=10;
        i++;
    }
    while(num>0);
    printf("number of digits in a given integer is %d",i);
}
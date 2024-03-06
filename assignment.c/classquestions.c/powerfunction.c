#include<stdio.h>
int main(){
    int num,expo;
    printf("enter ay number");
    scanf("%d",&num);
    printf("enter ay exponential");
    scanf("%d",&expo);
    int res=1;
    while(expo>0){
       res=res*num;
       
       expo--;
    }
    printf("%d",res);

}
#include<stdio.h>
#include <stdbool.h>
int main(){
    int num;
    bool res=false;
    printf("enter any number ");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        
         if(num%i!=0){
            res=true;
        }
    }
    if(res){
        printf("number is prime");
    }
    else{
        printf("number is not prime");
    }
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number ");
    scanf("%d",&n);
    switch(n>0){
        case 1:
        printf("Number is positive");
        break;
        case 0:
        if(n==0){
            printf("Number is Zero");
        }
        else{
            printf("Number is negative");

        }
        break;
        
        
    }
}
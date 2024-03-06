#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int n,fact=1;
    char ch;
    bool res=false;
    printf("enter 1 for factorial 2 for prime 3 for even 4 for exit()");
    scanf("%c",&ch);
    printf("enter value of n");
    scanf("%d",&n);
    switch(ch){
        case '1':
            for(int i=1;i<=n;i++){
                fact=fact*i;}
            printf("factorial of %d is %d",n,fact);
            break;
        case '2':
            for(int i=2;i<n;i++){
                if(n%i!=0){
                    res= true;
                }
            }
            if(res){
                printf("number is prime");
            }
            else{
                printf("number os not prime");
            }
            break;
        case '3':
            if(n%2==0){
                printf("number is even");
            }        
            else{
                printf("number is odd");
            }
            break;
        case '4':
            break;    
    }
}
#include<stdio.h>
int main(){
    int n1,n2,gcd1;
    printf("enter first number");
    scanf("%d",&n1);
    printf("enter second number");
    scanf("%d",&n2);
    int i=1;
    while(i<=n1 && i<=n2){
        if(n1%i==0 && n2%i==0){
             gcd1=i;
        }
        i++;
    }
    printf("Greatest common divisor is %d",gcd1);

}
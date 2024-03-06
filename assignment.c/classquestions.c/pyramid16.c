#include<stdio.h>
int main(){
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%d",i+j);
        }
        for(int j=i-1;j>0;j--){
            printf("%d",i+j-1);
        }
        printf("\n");
    }
}
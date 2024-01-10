#include<stdio.h>
int main(){
    int n;
    printf("enter value of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%s","*");
        }
        for(int j=i-1;j>0;j--){
            printf("%s","*");
        }
        printf("\n");
    }
    int i=n-1;
    while(i>=0){
        for(int j=1;j<=n-i-1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%s","*");
        }
        for(int j=i;j>=0;j--){
            printf("%s","*");
        }
        printf("\n");
        i--;
    }
    return 0;
}
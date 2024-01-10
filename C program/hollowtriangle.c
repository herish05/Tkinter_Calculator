#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
                                                                        for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(i==1||i==n||j==1||j==i+1){
                printf("%s","*");
            }
            else{
                printf(" ");
            }
        }
        for(int j=i-1;j>=1;j--){
            if(j==i+1||j==1||i==n){
                printf("%s","*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n-2;i++){
        for(int j=1;j<=n;j++){
            printf("%s"," *");
        }
        printf("\n");
    }
    return 0;
}
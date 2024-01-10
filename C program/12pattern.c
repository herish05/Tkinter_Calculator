#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<=n){
                printf("%s","0");
            }
            else if(i+j-1==n){
                printf("%s","1");
            }
            else{
                printf("%s","2");
            }
        }
        printf("\n");
    }
return 0;
}
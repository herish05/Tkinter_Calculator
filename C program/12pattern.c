#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<=n){
                printf("%s","0");
            }
            else if(i+j-1==n){
                printf("%s","2");
            }
            else{
                printf("%s","1");
            }
        }
        printf("\n");
    }
return 0;
}

#include<stdio.h>
int main(){
    int n,n1=0,n2=1;
    printf("enter value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",n1);
        int c=n1+n2;
        n1=n2;
        n2=c;
}

}
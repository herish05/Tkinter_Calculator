#include<stdio.h>
int main(){
    int start,end;
    printf("enter start value");
    scanf("%d",&start);
    printf("enter value of end");
    scanf("%d",&end);
    for(start;start<=end;start++){
        if(start%2==0){
            printf(" even number is %d\n",start);
        }
    }
}
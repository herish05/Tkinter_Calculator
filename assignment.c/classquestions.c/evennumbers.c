#include<stdio.h>
#include <stdbool.h>
int main(){
    int start,end;
    bool res=false;
    printf("enter value of start");
    scanf("%d",&start);
    printf("enter value of end");
    scanf("%d",&end);
    for(int i=start;i<end;i++){
        bool res=false;
        for(int j=2;j<i;j++){
            if(i%j==0){
                res=true;
                break;
            }
        }
        if(!res){
            printf("%d\n",i);
        }
    }
}
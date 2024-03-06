#include<stdio.h>
int main(){
    int ascii;
    printf("enter value of ascii ");
    scanf("%d",&ascii);
    int i=28;
    while(i<=ascii){
        printf("Ascii character of value %d is %c \n",i,i);
        i++;
    }
    return 0;
}
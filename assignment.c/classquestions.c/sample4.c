#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int arg, char *argv[]){
    printf("%d",getpid());
    char *args[]={"sample4copy","c","program",NULL};
    execv("sample4copy",args);
    return 0;

}
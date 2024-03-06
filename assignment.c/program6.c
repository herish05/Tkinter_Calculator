
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter value a");
    scanf("%d",&a);
    printf("Enter value b");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("swapped number by temporary variable is:a=%d b=%d \n",a,b);
    int c=b,d=a;
    c=c+d;
    d=c-d;
    c=c-d;
    printf("swapped number without using temporary variable c=%d d=%d",c,d);
}
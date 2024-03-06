
#include <stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("enter operation:");
    scanf("%c",&ch);
    printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    switch(ch){
        case '+':printf("sum of numbers is %d",a+b);
            break;
        case '-':printf(" Subtraction of numbers is %d",a-b);
            break;
        case '*':printf(" Multiplication of numbers is %d",a*b);
            break;
        case '%':printf(" Remainder of numbers is %d",a%b);
            break;
        case '/':printf("Division of numbers is %d",a/b);
            break;
        default:
            printf("enter valid details");
            break;}
        return 0;
}
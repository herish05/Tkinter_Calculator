
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("the number is %d",n);
    return 0;
}
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Sum of both number is= %d \n", a + b);
    printf("Difference of both number is= %d \n", a - b);
    printf("Multiplication of both number is= %d \n", a * b);
    printf("Divison of both number is= %d \n", a / b);
    return 0;
}
#include<stdio.h>
int main(){
    float v,u,a,t;
    printf("enter u:");
    scanf("%f",&u);
    printf("enter a:");
    scanf("%f",&a);
    printf("enter t:");
    scanf("%f",&t);
    v = u + (a*t);
    printf("so value of v is %f",v);
    return 0;
}

#include<stdio.h>
int main(){
    float s,u,a,t;
    printf("enter u:");
    scanf("%f",&u);
    printf("enter a:");
    scanf("%f",&a);
    printf("enter t:");
    scanf("%f",&t);
    s = u*t + (0.5*a*t*t);
    printf("so value of s is %f",s);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    float b,c,a,T;
    printf("enter a:");
scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    printf("enter c:");
    scanf("%f",&c);
    T = 2*a + pow(b,0.5) + 9*c;
    printf("so value of T is %f",T);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    float b,H,p;
    printf("enter b:");
    scanf("%f",&b);
    printf("enter p:");
    scanf("%f",&p);
    H = sqrt(pow(b,2) + pow(p,2));
    printf("so value of H is %f",H);
    return 0;
}
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter value of a ");
    scanf("%d",&a);
    printf("Enter value of b ");
    scanf("%d",&b);
    printf("Enter value of c ");
    scanf("%d",&c);
    d=(a>b)?(a>c)?a:c:(b>c)?b:c;
    printf("The greatest among three number is: %d",d);
    return 0;
}
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st number= ");
    scanf("%d", &a);
    printf("Enter 2nd number= ");
    scanf("%d", &b);
    printf("Enter 3rd number= ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is the greatest among them", a);
    }
    else if (b > c && b > c)
    {
        printf("%d is the greatest among them", b);
    }
    else
    {
        printf("%d is the greatest among them", c);
    }
    return 0;
}


#include <stdio.h>
int main(){
    char a;
    printf("enter a character: ");
    scanf("%c",&a);
    switch (a)
    {
    case 'e':printf("its a vowel");
        break;
    case 'i':printf("its a vowel");
        break;
    case 'o':printf("its a vowel");
        break;
    case 'u':printf("its a vowel");
        break;
    case 'a':printf("its a vowel");
        break;

    default:printf("its a consonant");
        break;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    switch (a > 0)
    {
    case 1:
        printf("%d is a positive number", a);
        break;
    case 0:
        switch (a < 0)
        {
        case 1:
            printf("%d is a negative number", a); break;
        case 0:
            printf("its zero"); break;
        }
        break;
    }
    return 0;
}


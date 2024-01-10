#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,s;
    double area;
    printf("enter first side of triangle: ");
    scanf("%lf", &a);
    printf("enter second side of triangle: ");
    scanf("%lf", &b);
    printf("enter third side of triangle: ");
    scanf("%lf", &c);
    s=(a+b+c)/2;
    area=sqrt(s * (s-a) * (s-b) * (s-c));
    printf("area of triangle is %1f",area);
    return 0;
}


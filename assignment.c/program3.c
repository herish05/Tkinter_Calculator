
#include<stdio.h>
int main(){
    float radius;
    printf("Enter value of radius  ");
    scanf("%f",&radius);
    printf("Area of circle is %f",(3.14*radius*radius));
    printf("\n");
    printf("Circumference of circle is %f",2*3.14*radius);
    return 0;
}
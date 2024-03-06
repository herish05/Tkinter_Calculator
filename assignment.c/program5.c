
#include<stdio.h>
#include<math.h>
int main(){
        int u,a,t,b,c,p;
        printf("Enter value of u:");
        scanf("%d",&u);
        printf("Enter value of a:");
        scanf("%d",&a);
        printf("Enter value of t:");
        scanf("%d",&t);
        printf("Enter value of b:");
        scanf("%d",&b);
         printf("Enter value of c:");
        scanf("%d",&c);
        printf("Enter value of p:");
        scanf("%d",&p);
        int V=u+a*t;
        printf("V=%d\n",V);

        float S=u*t+(0.5*a*t*t);
        printf("S=%.2f\n",S);
         float T=2*a+pow(b,0.5)+9*c;
         printf("T=%.2f\n",T);
        float H=pow(b*b+p*p,0.5);
        printf("H=%.2f\n",H);
}
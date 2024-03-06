#include<stdio.h>
int main(){
    int n;
    printf("Enetr total money");
    scanf("%d",&n);
    int hund=n/100;
    int fif=(n%100)/50;
    int ten=(n%50)/10;
    int five=(n%10)/5;
    int two=(n%5)/2;
    int one=(n%5)%2;
    printf("number of hundred notes is %d\n",hund);
    printf("number of fifty notes is %d\n",fif);
    printf("number of ten notes is %d\n",ten);
    printf("number of five notes is %d\n",five);
    printf("number of two notes is %d\n",two);
    printf("number of one notes is %d\n",one);
    return 0;
}
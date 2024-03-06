#include<stdio.h>
int main(){
    char ch;
    printf("Enter any Alphabet");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        printf("Alphabet is vowel");
        break;
        case 'i':
        printf("Alphabet is vowel");
        break;
        case 'e':
        printf("Alphabet is vowel");
        break;
        case 'o':
        printf("Alphabet is vowel");
        break;
        case 'u':
        printf("Alphabet is vowel");
        break;
        default:
        printf("Alphabet is consonant");
    }
}
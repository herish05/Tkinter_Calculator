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


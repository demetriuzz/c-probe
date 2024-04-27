#include <stdio.h>

int main(void)
{
    int a = 10;
    switch (a)
    {
    case 9:
        printf("равно 9\n");
        // break;

    case 10:
        printf("равно 10\n");
        break;

    case 11:
        printf("равно 11\n");
        break;

    default:
        printf("другое число\n");
        break;
    }

    printf("\n");
    return 0;
}
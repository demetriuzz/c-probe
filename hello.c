#include <stdio.h>

signed int result = -100;
unsigned int resultU = 10u;
float resultF = 3.111222f;
double resultD = 2.555666;
char letter = 'M';

typedef unsigned char BYTE;
BYTE byte = 100;

const float PI = 3.14f;

int main(void)
{
    /*
     *
     *
     */
    printf("Здрасьте!\nРезультаты:\t%d | %u\n", result, resultU);
    result = result + 20;
    resultU = resultU + 20;
    printf("Результат 2:\t%d | %u\n", result, resultU);
    printf("Результат наоборот:\t%u | %d\n", result, resultU);
    printf("Результат 3:\t%f | %f\n", resultF, resultD);
    printf("Результат 4:\t%c | %d\n", letter, letter);
    printf("Результат 5:\t%d\n", byte);

    return 0;
}

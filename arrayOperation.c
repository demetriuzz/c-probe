#include <stdio.h>

typedef char BYTE;

int main(void)
{
    printf("Операции с массивом\n");

    BYTE array[] = {3, 5, 67, 45, 13, 89};
    // размер массива в байтах
    size_t size = sizeof(array);
    // нарастающий размер
    size_t current;
    BYTE i = 0;

    for (;; i++)
    {
        current = (i + 1) * sizeof(BYTE);
        if (current > size)
            break;
        printf("Элемент номер [%d] = %d (размер = %zu)\n", i, array[i], current);
    }

    printf("Размер массива: %d\n", i);
    return 0;
}

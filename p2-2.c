#include <stdio.h>

void print1 (int *ptr, int rows);

int main()
{
    int one[] = {0, 1, 2, 3, 4};

    printf("one     = %p\n", one);
    printf("&one    = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    // one의 값, one의 주소, one[0]의 주소가 모두 동일하게 나온다.
    printf("\n");

    print1(&one[0], 5);

    return 0;
}

void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */

    int i;
    printf ("Address Contents\n");
    for (i = 0; i < rows; i++)
    printf("%p \t  %5d\n", ptr + i, *(ptr + i));
        //integer형의 배열이기 때문에 4bytes만큼의 주소가 이동을 한다.
    printf("\n");
    printf("신태양\n");
    printf("2017038096\n");
}
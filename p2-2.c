#include <stdio.h>

void print1 (int *ptr, int rows);

int main()
{
    int one[] = {0, 1, 2, 3, 4};

    printf("one     = %p\n", one);
    printf("&one    = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    // one�� ��, one�� �ּ�, one[0]�� �ּҰ� ��� �����ϰ� ���´�.
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
        //integer���� �迭�̱� ������ 4bytes��ŭ�� �ּҰ� �̵��� �Ѵ�.
    printf("\n");
    printf("���¾�\n");
    printf("2017038096\n");
}
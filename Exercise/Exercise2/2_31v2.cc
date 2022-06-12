#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        printf("%d*%d=%-5d ", i, i, i * i);
        for (j = i + 1; j <= 9; j++)
        {
            printf("%d*%d=%-5d ", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
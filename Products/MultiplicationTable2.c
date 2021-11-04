#include <stdio.h>

void main()
{

    float n;
    int max;
    while (1)
    {
        printf("Enter the number whose multiplication table you want (press 0 to Exit)\n");
        scanf("%f", &n);
        if (n == 0)
        {
            break;
        }
        printf("Enter how much multiplication you want\n");
        scanf("%d", &max);
        for (int m = 1; m <= max; m++)
        {
            printf("%.2f X %d = %.3f \n", n, m, n * m);
        }
    }
}
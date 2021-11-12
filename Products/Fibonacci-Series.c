#include <stdio.h>
void main()
{
    printf("\t******* Printing Fibonacci Series *******\n\a\n");
    while (1)
    {
        long int a = 0, b = 1, n;
        printf("Enter how much Fibonacci series you want\n\a");
        scanf("%lu", &n);
        printf("\n\n");
        for (int i = 0; i <= n; i++)
        {
            printf("\t %lu\n\n\a", a + b);
            a = a + b;
            b = a - b;
        }
    }
}
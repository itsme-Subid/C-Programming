#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < i ; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    getch();
}
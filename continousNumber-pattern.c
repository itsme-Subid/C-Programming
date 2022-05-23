#include <stdio.h>
#include <conio.h>

void main()
{
    int a, k = 1;
    printf("Enter a number\n");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" %d", k++);
        }
        printf("\n");
    }
    getch();
}
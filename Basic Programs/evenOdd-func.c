#include <stdio.h>
#include <conio.h>

void evenOdd();

void main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);
    evenOdd(n);
    getch();
}

void evenOdd(int n)
{
    if (n % 2 == 0)
    {
        printf("The number %d is even\n", n);
    }

    else
    {
        printf("The number %d is odd\n", n);
    }
}
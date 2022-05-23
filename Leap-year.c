#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter a year\n");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Entered year %d is not a year\n", n);
    }

    else if (n % 4 == 0)
    {
        printf("Entered year %d is a leap year\n", n);
    }
    else if (n % 4 != 0)
    {
        printf("Entered year %d is not a leap year\n", n);
    }

    else
    {
        printf("Something went wrong\n");
    }

    getch();
}
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("Entered number %d is nor even neither odd", n);
    }
    else if (n % 2 == 0)
    {
        printf("Entered number %d is even", n);
    }
    else
    {
        printf("Entered number %d is odd", n);
    }

    getch();
}
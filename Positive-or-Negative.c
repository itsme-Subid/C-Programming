#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Entered number %d is a positive number\n", n);
    }
    else if (n < 0)
    {
        printf("Entered number %d is a negative number\n", n);
    }
    else
    {
        printf("Entered number %d is nor positive neither negative number\n", n);
    }

    getch();
}
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("The first number %d is greatest\n", a);
    }
    else if (b > a && b > c)
    {
        printf("The first number %d is greatest\n", b);
    }
    else if (c > b && c > a)
    {
        printf("The first number %d is greatest\n", c);
    }
    if (a < b && a < c)
    {
        printf("The first number %d is smallest\n", a);
    }
    else if (b < c && b < a)
    {
        printf("The first number %d is smallest\n", b);
    }
    else if (c < b && c < a)
    {
        printf("The first number %d is smallest\n", c);
    }
    else
    {
        printf("Something went wrong\n");
    }
    getch();
}
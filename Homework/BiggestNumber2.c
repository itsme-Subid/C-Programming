#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 0, b = 0, c = 0;
    clrscr();
    printf("Enter three integer\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b == c)
    {
        printf("All are equal");
    }
    if (a > b & a > c)
    {
        printf("1st one is greater");
    }
    if (b > a & b > c)
    {
        printf("2nd one is greater");
    }
    if (c > a & c > b)
    {
        printf("3rd one is greater");
    }

    getch();
}
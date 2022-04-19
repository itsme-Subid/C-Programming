#include <stdio.h>
#include <conio.h>
void main()
{
    clrscr();
    int a = 0, b = 0;
    printf("Enter two integer\n");
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("Both are equal");
    }
    if (a > b)
    {
        printf("1st one is greater");
    }
    if (b > a)
    {
        printf("2nd one is greater");
    }

    getch();
}
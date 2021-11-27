#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 0, b = 0;
    clrscr();
    printf("Enter the values of two numbers a, b\n");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\nProduct = %d", a + b, a * b);
    getch();
}
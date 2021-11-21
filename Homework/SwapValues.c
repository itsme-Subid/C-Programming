#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 1, b = 2, swap;
    swap = a;
    a = b;
    b = swap;
    clrscr();
    printf("The value of \"a\" is assigned as b, now b = %d\nAnd the value of \"b\" is assigned as a, now a = %d\n", b, a);
    getch();
}
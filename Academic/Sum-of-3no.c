#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, s;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    s = a + b + c;
    printf("%d\n", s);
    getch();
}
#include <stdio.h>
#include <conio.h>

void swap();

void main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    swap(a, b);
    getch();
}
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d\n", a, b);
}
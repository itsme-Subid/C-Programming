#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 3, b = 4;
    printf("Enter value for a and b\n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swaped values\n%d\n%d\n", a, b);
    getch();
}
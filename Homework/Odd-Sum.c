#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int n, r = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    r = (n / 2) + (n % 2);
    r = (r * r);
    printf("%d\n", r);
    getch();
}
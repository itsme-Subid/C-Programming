#include <stdio.h>
#include <conio.h>
void main()
{
    //sum of 1st and last digit of a five digit number
    int a, b, c, d;
    printf("Enter any 5 digit integer\n");
    scanf("%d", &a);
    b = a / 10000;
    c = a % 10;
    d = b + c;
    printf("1st = %d\nlast = %d\n", b, c);
    printf("sum of 1st and last digit of %d five digit number is %d\n", a, d);
    getch();
}
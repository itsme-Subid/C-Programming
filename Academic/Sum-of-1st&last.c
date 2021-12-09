#include <stdio.h>
#include <conio.h>
void main()
{
    //sum of 1st and last digit of a five digit number
    int a, b;
    printf("Enter any 5 digit integer\n");
    scanf("%d", &a);
    b = (a / 10000) + (a % 10);
    printf("sum of 1st and last digit of %d five digit number is %d\n", a, b);
    getch();
}
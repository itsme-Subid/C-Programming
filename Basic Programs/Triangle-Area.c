#include <stdio.h>
#include <conio.h>

void main()
{

    float half = 0.5, height, base;
    clrscr();
    printf("Enter height of your triangle\n");
    scanf("%f", &height);
    printf("Enter base of your triangle\n");
    scanf("%f", &base);
    printf("Area of your triangle is triangle is %f", half * height * base);
    getch();
}
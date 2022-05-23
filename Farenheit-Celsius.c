#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();
    double ThirtyTwo = 32, OnePointEight = 1.8, FarenheitValue;
    printf("Enter Farenheit value\n");
    scanf("%lf", &FarenheitValue);
    printf("In Celsius it will be %lf", (FarenheitValue - ThirtyTwo) / OnePointEight);
    getch();
}
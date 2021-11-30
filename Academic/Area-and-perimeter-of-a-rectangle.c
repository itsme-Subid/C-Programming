#include <stdio.h>
#include <conio.h>
void main()
{
    //area and perimeter of a rectangle
    float rad, per, area, pie = (22.0 / 7.0);
    printf("Enter radius of your circle\n");
    scanf("%f", &rad);
    area = pie * rad * rad;
    per = 2 * pie * rad;
    printf("Area = %.2f and Perimeter = %.2f\n", area, per);
    getch();
}
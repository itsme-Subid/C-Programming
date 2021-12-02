#include <stdio.h>
#include <conio.h>
void main()
{
    //calculate simple interest
    float i = 0, p = 0, r = 0, t = 0;
    printf("Enter the Principle, rate of interest and time period (in years)\n");
    scanf("%f %f %f", &p, &r, &t);
    i = (p * t * (r / 100));
    printf("Simple interest = %.2f\n", i);
    getch();
}
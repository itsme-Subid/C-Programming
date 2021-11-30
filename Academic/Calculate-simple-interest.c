#include <stdio.h>
#include <conio.h>
void main()
{
    //calculate simple interest
    int p = 0, r = 0, t = 0;
    float i = 0;
    printf("Enter the Principle, rate of interest and time period (in years)\n");
    scanf("%d %d %d", &p, &r, &t);
    i = p * t * r * .01;
    printf("Simple interest = %.2f\n", i);
    getch();
}
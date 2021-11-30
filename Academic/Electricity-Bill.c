#include <stdio.h>
#include <conio.h>
void main()
{
    int unit = 0;
    float bill = 0;
    clrscr();
    printf("Enter the unit\n");
    scanf("%d", &unit);
    if (unit <= 200)
    {
        bill = unit * 0.5;
        printf("Bill is %f\n", bill);
    }
    if (unit > 200 & unit <= 400)
    {
        bill = 100 + (unit * .65);
        printf("Bill is %f\n", bill);
    }
    if (unit > 400 & unit <= 600)
    {
        bill = 230 + (unit * .8);
        printf("Bill is %f\n", bill);
    }
    if (unit > 600)
    {
        bill = 425 + (unit * 1.25);
        printf("Bill is %f\n", bill);
    }

    getch();
}
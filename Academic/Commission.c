#include <stdio.h>
#include <conio.h>
void main()
{
    int sale = 0, comm = 0;
    clrscr();
    printf("Enter the sale price\n");
    scanf("%d", &sale);
    if (sale <= 500)
    {
        comm = sale * .05;
        printf("comm = %d\n", comm);
    }
    if (sale > 500 & sale <= 2000)
    {
        comm = 35 + ((sale - 500) * .1);
        printf("comm = %d\n", comm);
    }
    if (sale > 2000 & sale <= 5000)
    {
        comm = 185 + ((sale - 2000) * .12);
        printf("comm = %d\n", comm);
    }
    if (sale > 5000)
    {
        comm = sale* .125;
        printf("comm = %d\n", comm);
    }

    getch();
}
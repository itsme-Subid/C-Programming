#include <stdio.h>
#include <math.h>
#include <conio.h>
// Write a program to check whether a number is Leyland or not

void main()
{
    int n = 0, x = 2, y = 2, bool = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (x = 2; x <= n; x++)
    {
        for (y = 2; y <= x; y++)
        {
            if ((pow(x, y) + pow(y, x)) == n)
            {
                bool = 1;
                goto exitOuterLoop;
            }
        }
    }
exitOuterLoop:
    printf(
        bool == 1 ? "The entered number is a leyland number" : "The entered number is not a leyland number");
    getch();
}
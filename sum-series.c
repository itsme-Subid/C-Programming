//The series is (1!/1)+(2!/2)+(3!/3)+(4!/4)+(5!/5)

#include <stdio.h>
#include <conio.h>

void series();
int fact();

void main()
{
    series();
    getch();
}

int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

void series()
{
    int n = 5, k = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        k += fact(n - i) / (n - i);
    }

    printf("The sum of the series is %d\n", k);
}
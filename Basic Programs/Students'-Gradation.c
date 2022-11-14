#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter your marks\n");
    scanf("%d", &n);
    if (n >= 90)
    {
        printf("Grade S\n");
    }
    else if (n >= 80 && n < 90)
    {
        printf("Grade A\n");
    }
    else if (n >= 70 && n < 80)
    {
        printf("Grade B\n");
    }
    else if (n >= 60 && n < 70)
    {
        printf("Grade C\n");
    }
    else if (n >= 50 && n < 60)
    {
        printf("Grade D\n");
    }
    else if (n < 50)
    {
        printf("Grade F\n");
    }
    else
    {
        printf("Something went wrong\n");
    }

    getch();
}
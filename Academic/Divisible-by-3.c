#include <stdio.h>
#include <conio.h>
void main()
{
    //check a number is divisible by 3 or not
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a % 3 == 0)
    {
        printf("Entered number %d is divisible by 3\n", a);
    }
    else if (a % 3 != 0)
    {
        printf("Entered number %d is not divisible by 3\n", a);
    }
    else
    {
        printf("Something went wrong\n");
    }

    getch();
}
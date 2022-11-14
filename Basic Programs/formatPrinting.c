#include <stdio.h>
#include <conio.h>

void main()
{
    // At the time of displaying the integers add 0 at the beginning if the integer has less than 2 digits
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("The integers are: %02d %02d", a, b);
    getch();
}
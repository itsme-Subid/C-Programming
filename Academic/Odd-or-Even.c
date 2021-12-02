#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    (n % 2 == 0) ? (printf("Entered number %d is even\n", n)) : (printf("Entered number %d is odd\n", n));
    getch();
}
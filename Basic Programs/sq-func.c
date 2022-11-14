#include <stdio.h>
#include <conio.h>

void sq();

void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    sq(n);
    getch();
}
void sq(int n)
{
    int s = n * n;
    printf("the square of number %d is %d \n", n, s);
}
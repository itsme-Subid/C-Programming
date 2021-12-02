#include <stdio.h>
#include <conio.h>
void main()
{
    int num, reverse;
    printf("Enter a 3 digit number\n");
    scanf("%d", &num);
    reverse = reverse * 10 + num % 10;
    num = num / 10;
    reverse = reverse * 10 + num % 10;
    num = num / 10;
    reverse = reverse * 10 + num % 10;
    num = num / 10;
    printf("%d\n", reverse);
    getch();
}
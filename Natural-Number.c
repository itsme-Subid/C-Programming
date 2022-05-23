#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (n > 0)
    {
        n--;
        i++;
        printf("%d\n", i);
    }

    getch();
}
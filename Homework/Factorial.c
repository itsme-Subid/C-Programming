#include <stdio.h>
#include <conio.h>
void main()
{
    int n = 0, f = 1, i = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (n > 0)
    {
        n--;
        i++;
        f = f * i;
    }
    printf("%d\n", f);
    getch();
}
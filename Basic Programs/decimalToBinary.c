#include <stdio.h>
#include <conio.h>

int main()
{
    system("CLS");
    int n, b, c, i;
    printf("Enter the Decimal number: ");
    scanf("%d", &n);
    b = n;
    c = 0;
    while (n > 0)
    {
        n = n / 2;
        c++;
    }
    int a[c];
    a[0] = 0;
    for (i = 0; i < c; i++)
    {
        a[i] = b % 2;
        b /= 2;
    }
    printf("The Binary number: ");
    for (i = c - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    getch();
    return 0;
}
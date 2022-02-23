#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10], b = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value for a[%d]\n", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        b += a[i];
    }
    printf("The sum of all array elements is %d\n", b);
    getch();
}
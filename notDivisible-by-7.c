#include <stdio.h>
#include <conio.h>

void arrayReverse(int arr[], int a)
{
    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}

void main()
{
    int a = 0, n = 0, arr[1000];
    printf("Enter a number\n");
    scanf("%d", &n);
    while (n >= 0)
    {
        if (n % 7 > 0)
        {
            arr[a] = n;
            a++;
        }
        n--;
    }
    arrayReverse(arr, a);
    getch();
}
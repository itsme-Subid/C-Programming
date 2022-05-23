#include <stdio.h>
#include <conio.h>
void main()
{
    // average of 3 numbers
    int i, j, k, av;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &i, &j, &k);
    av = ((i + j + k) / 3);
    printf("%.2f\n", (float)av);
    getch();
}
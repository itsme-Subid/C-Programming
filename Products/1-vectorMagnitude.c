#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
    int a[6];
    float mag;

    printf("\n\nNote: if you have one dimensional or two dimensional vector\nThen write the other component as 0\nFor example 4j -> 0i+4j+0k\n");
    printf("Enter the vector A\n");
    scanf("%d%c%d%c%d%c", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
    mag = sqrt((a[0] * a[0]) + (a[2] * a[2]) + (a[4] * a[4]));
    printf("The magnitude of the vector A (%d%c)+(%d%c)+(%d%c) is %.3f\n", a[0], a[1], a[2], a[3], a[4], a[5],mag);
    getch();
}
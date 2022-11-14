#include <stdio.h>
#include <conio.h>

int main()
{
    int x1, x2, y1, y2, z1, z2, i1, i2, j1, j2, k1, k2;

    printf("\n\nNote: if you have one dimensional or two dimensional vector\nThen write the other component as 0\nFor example 4j -> 0i+4j+0k\n");
    printf("Enter the vector A\n");
    scanf("%d%c%d%c%d%c", &x1, &i1, &y1, &j1, &z1, &k1);
    printf("Enter the vector B\n");
    scanf("%d%c%d%c%d%c", &x2, &i2, &y2, &j2, &z2, &k2);

    x1 = x1 + x2;
    y1 = y1 + y2;
    z1 = z1 + z2;

    printf("(%d%c)+(%d%c)+(%d%c)\n", x1, i1, y1, j1, z1, k1);
    return 0;
}
#include <stdio.h>
#include <conio.h>

struct vec
{
    int x, y, z;
    char i, j, k;
};

int main()
{
    struct vec arr[2];
    printf("\n\nNote: if you have one dimensional or two dimensional vector\nThen write the other component as 0\nFor example 4j -> 0i+4j+0k\n");
    printf("Enter the vector A\n");
    scanf("%d%c%d%c%d%c", &arr[0].x, &arr[0].i, &arr[0].y, &arr[0].j, &arr[0].z, &arr[0].k);
    printf("Enter the vector B\n");
    scanf("%d%c%d%c%d%c", &arr[1].x, &arr[1].i, &arr[1].y, &arr[1].j, &arr[1].z, &arr[1].k);

    arr[0].x = arr[0].x + arr[1].x;
    arr[0].y = arr[0].y + arr[1].y;
    arr[0].z = arr[0].z + arr[1].z;

    printf("(%d%c)+(%d%c)+(%d%c)\n", arr[0].x, arr[0].i, arr[0].y, arr[0].j, arr[0].z, arr[0].k);
    return 0;
}
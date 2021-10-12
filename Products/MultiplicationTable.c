#include <stdio.h> 

int main(){ 

    float n;
    int max;
    printf("Enter the number whose multiplication table you want\n");
    scanf("%f", &n);
    printf("Enter how much multiplication you want\n");
    scanf("%d", &max);
    for (int m = 1; m <= max; m++)
    {
        printf("%.2f X %d = %.3f \n", n, m, n*m);
    }
    return 0; 

}
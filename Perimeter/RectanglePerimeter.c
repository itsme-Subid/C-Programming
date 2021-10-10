#include <stdio.h> 

int main(){ 

    double a,b;
    printf("Enter length of your rectangle\n");
    scanf("%lf", &a);
    printf("Enter base of your rectangle\n");
    scanf("%lf", &b);
    printf("Perimeter of your rectangle perimeter is %lf \n", 2*(a+b));

    return 0; 

}
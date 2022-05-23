#include <stdio.h> 

int main(){ 

    double a,b;
    printf("Enter side of your isosceles triangle\n");
    scanf("%lf", &a);
    printf("Enter base of your isosceles triangle\n");
    scanf("%lf", &b);
    printf("Perimeter of your isosceles triangle perimeter is %lf \n", 2*a+b);

    return 0; 

}
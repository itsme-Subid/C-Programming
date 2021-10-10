#include <stdio.h> 

int main(){ 

    double a,b,c,d;
    printf("Enter 1st side of your trapezoid\n");
    scanf("%lf", &a);
    printf("Enter 2nd side of your trapezoid\n");
    scanf("%lf", &b);
    printf("Enter base side of your trapezoid\n");
    scanf("%lf", &c);
    printf("Enter 2nd base side of your trapezoid\n");
    scanf("%lf", &d);
    printf("Perimeter of your trapezoid is %lf \n", a+b+c+d);

    return 0; 

}
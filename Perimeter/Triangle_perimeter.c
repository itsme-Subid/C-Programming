#include <stdio.h> 

int main(){ 

    double a,b,c;
    printf("Enter 1st side of your triangle\n");
    scanf("%lf", &a);
    printf("Enter 2nd side of your triangle\n");
    scanf("%lf", &b);
    printf("Enter base side of your triangle\n");
    scanf("%lf", &c);
    printf("Perimeter of your triangle is %lf \n", a+b+c);

    return 0; 

}
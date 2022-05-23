#include <stdio.h> 

int main(){ 

    float first_base, second_base, height, half=0.5;
    printf("Enter first base length of your trapezium\n");
    scanf("%f", &first_base);
    printf("Enter second base length of your trapezium\n");
    scanf("%f", &second_base);
    printf("Enter height of your trapezium\n");
    scanf("%f", &height);
    printf("Area of trapezium is %f", half*(first_base+second_base)*height);
    return 0; 

}
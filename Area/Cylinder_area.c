#include <stdio.h> 

int main(){ 

    float height, radius, two=2, pi=3.141592654;
    printf("Enter radius of your circle\n");
    scanf("%f", &radius);
    printf("Enter height of your circle\n");
    scanf("%f", &height);
    printf("Area of your Cylinder is %f", (two*pi*radius*height)+(two*pi*radius*radius));

    return 0; 

}
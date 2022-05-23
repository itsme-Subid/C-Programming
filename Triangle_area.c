#include <stdio.h> 

int main(){ 

    float half=0.5, height, base;
    printf("Enter height of your triangle\n");
    scanf("%f", &height);
    printf("Enter base of your triangle\n");
    scanf("%f", &base);
    printf("Area of your triangle is triangle is %f", half*height*base);

    return 0; 

}
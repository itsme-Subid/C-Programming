#include <stdio.h> 

int main(){ 

    float length, breadth;
    printf("Enter length of your rectangle\n");
    scanf("%f", &length);
    printf("Enter breadth of your rectangle\n");
    scanf("%f", &breadth);
    printf("\n");
    printf("Area of your rectangle is %f", length*breadth);
    return 0; 

}
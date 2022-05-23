#include <stdio.h> 

int main(){ 

    double side;
    printf("Enter side of your square\n");
    scanf("%lf", &side);
    printf("Area of your square is %lf", side*side);
    return 0; 

}
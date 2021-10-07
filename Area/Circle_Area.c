#include <stdio.h> 

int main(){ 

    float radius, pi=3.141592653589793238;
    printf("Enter radius of your circle\n");
    scanf("%f", &radius);
    printf("The area of your circle is %f\n", pi*radius*radius);
    return 0; 

}
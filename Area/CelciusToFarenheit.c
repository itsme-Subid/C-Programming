#include <stdio.h> 

int main(){ 

    float ThirtyTwo=32, OnePointEight=1.8, CelciusValue;
    printf("Enter Celcius value\n");
    scanf("%f", &CelciusValue);
    printf("In farenheit it will be %f", (CelciusValue*OnePointEight)+ThirtyTwo);
    return 0; 

}
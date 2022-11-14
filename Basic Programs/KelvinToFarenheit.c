#include <stdio.h> 

int main(){ 

    double ThirtyTwo=32, OnePointEight=1.8, KelvinValue = 273.15, Kelvinscan;
    printf("Enter Kelvin Value\n");
    scanf("%lf", &Kelvinscan);
    printf("In Farenheit it will be %lf", (Kelvinscan-KelvinValue)*OnePointEight+ThirtyTwo);
    return 0; 

}

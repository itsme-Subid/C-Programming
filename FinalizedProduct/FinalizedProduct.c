#include <stdio.h>

int main()
{

    int value, value1, value2, value3;
    printf("For Area enter 1\n");
    printf("For Perimeter enter 2\n");
    printf("For Temperature enter 3\n");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
        printf("You selected Area\n");
        printf("For Circle Area enter 1\n");
        printf("For Cylinder Area enter 2\n");
        printf("For Rectangle Area enter 3\n");
        printf("For Square Area enter 4\n");
        printf("For Trapezium Area enter 5\n");
        printf("For Triangle Area enter 6\n");
        scanf("%d", &value1);
        switch (value1)
        {
        case 1:
        {

            double radius, pi = 3.141592653589793238;
            printf("You selected Circle Area\n");
            printf("Enter radius of your circle\n");
            scanf("%lf", &radius);
            printf("The area of your circle is %lf\n", pi * radius * radius);
            return 0;
        }
        break;
        case 2:
        {

            double height, radius, two = 2, pi = 3.141592653589793238;
            printf("You selected Cylinder Area\n");
            printf("Enter radius of your circle\n");
            scanf("%lf", &radius);
            printf("Enter height of your circle\n");
            scanf("%lf", &height);
            printf("Area of your Cylinder is %lf", (two * pi * radius * height) + (two * pi * radius * radius));

            return 0;
        }
        break;
        case 3:
        {

            float length, breadth;
            printf("You selected Rectangle Area\n");
            printf("Enter length of your rectangle\n");
            scanf("%f", &length);
            printf("Enter breadth of your rectangle\n");
            scanf("%f", &breadth);
            printf("\n");
            printf("Area of your rectangle is %f", length * breadth);
            return 0;
        }
        break;
        case 4:
        {

            double side;
            printf("You selected Square Area\n");
            printf("Enter side of your square\n");
            scanf("%lf", &side);
            printf("Area of your square is %lf", side * side);
            return 0;
        }
        break;
        case 5:
        {

            float first_base, second_base, height, half = 0.5;
            printf("You selected Trapezium Area\n");
            printf("Enter first base length of your trapezium\n");
            scanf("%f", &first_base);
            printf("Enter second base length of your trapezium\n");
            scanf("%f", &second_base);
            printf("Enter height of your trapezium\n");
            scanf("%f", &height);
            printf("Area of trapezium is %f", half * (first_base + second_base) * height);
            return 0;
        }
        break;
        case 6:
        {

            float half = 0.5, height, base;
            printf("You selected Triangle Area\n");
            printf("Enter height of your triangle\n");
            scanf("%f", &height);
            printf("Enter base of your triangle\n");
            scanf("%f", &base);
            printf("Area of your triangle is triangle is %f", half * height * base);

            return 0;
        }
        break;

        default:
            printf("You Entered invalid number");
            break;
        }
        break;
    case 2:
        printf("You selected Perimeter\n");
        printf("For Circle Perimeter enter 1\n");
        printf("For Equilateral Triangle Perimeter enter 2\n");
        printf("For Isosceles Triangle Perimeter enter 3\n");
        printf("For Rectangle Perimeter enter 4\n");
        printf("For Square Perimeter enter 5\n");
        printf("For Trapezoid Perimeter enter 6\n");
        printf("For Triangle Perimeter enter 7\n");
        scanf("%d", &value2);
        switch (value2)
        {
        case 1:
        {

            float pi = 3.1415926535, two = 2, radius;
            printf("You selected Circle Perimeter\n");
            printf("Enter radius of your circle\n");
            scanf("%f", &radius);
            printf("Perimeter of your circle is %f\n", two * pi * radius);
            return 0;
        }
        break;
        case 2:
        {

            double a;
            printf("You selected Equilateral Triangle Perimeter\n");
            printf("Enter side of your equilateral triangle\n");
            scanf("%lf", &a);
            printf("Perimeter of your equilateral triangle perimeter is %lf \n", 3 * a);

            return 0;
        }
        break;
        case 3:
        {

            double a, b;
            printf("You selected Isosceles Triangle Perimeter\n");
            printf("Enter side of your isosceles triangle\n");
            scanf("%lf", &a);
            printf("Enter base of your isosceles triangle\n");
            scanf("%lf", &b);
            printf("Perimeter of your isosceles triangle perimeter is %lf \n", 2 * a + b);

            return 0;
        }
        break;
        case 4:
        {

            double a, b;
            printf("You selected Rectangle Perimeter\n");
            printf("Enter length of your rectangle\n");
            scanf("%lf", &a);
            printf("Enter base of your rectangle\n");
            scanf("%lf", &b);
            printf("Perimeter of your rectangle perimeter is %lf \n", 2 * (a + b));

            return 0;
        }
        break;
        case 5:
        {

            double a;
            printf("You selected Square Perimeter\n");
            printf("Enter side of your square\n");
            scanf("%lf", &a);
            printf("Perimeter of your square is %lf \n", 4 * a);

            return 0;
        }
        break;
        case 6:
        {

            double a, b, c, d;
            printf("You selected Trapezoid Perimeter\n");
            printf("Enter 1st side of your trapezoid\n");
            scanf("%lf", &a);
            printf("Enter 2nd side of your trapezoid\n");
            scanf("%lf", &b);
            printf("Enter base side of your trapezoid\n");
            scanf("%lf", &c);
            printf("Enter 2nd base side of your trapezoid\n");
            scanf("%lf", &d);
            printf("Perimeter of your trapezoid is %lf \n", a + b + c + d);

            return 0;
        }
        break;
        case 7:
        {

            double a, b, c;
            printf("You selected Triangle Perimeter\n");
            printf("Enter 1st side of your triangle\n");
            scanf("%lf", &a);
            printf("Enter 2nd side of your triangle\n");
            scanf("%lf", &b);
            printf("Enter base side of your triangle\n");
            scanf("%lf", &c);
            printf("Perimeter of your triangle is %lf \n", a + b + c);

            return 0;
        }
        break;
        default:
            printf("You Entered invalid number");
            break;
        }

        break;
    case 3:
        printf("You selected Temperature\n");
        printf("For Celsius to Farenheit enter 1\n");
        printf("For Celsius to Kelvin enter 2\n");
        printf("For Farenheit to Celsius enter 3\n");
        printf("For Farenheit to Kelvin enter 4\n");
        printf("For Kelvin to Celsius enter 5\n");
        printf("For Kelvin to Farenheit enter 6\n");
        scanf("%d", &value3);
        switch (value3)
        {
        case 1:
        {

            float ThirtyTwo = 32, OnePointEight = 1.8, CelsiusValue;
            printf("You selected Celsius to Farenheit in Temperature\n");
            printf("Enter Celsius value\n");
            scanf("%f", &CelsiusValue);
            printf("In Farenheit it will be %f", (CelsiusValue * OnePointEight) + ThirtyTwo);
            return 0;
        }
        break;
        case 2:
        {

            float CelsiusValue, KelvinValue = 273.15;
            printf("You selected Celsius to Kelvin in Temperature\n");
            printf("Enter Celsius value\n");
            scanf("%f", &CelsiusValue);
            printf("In Kelvin it will be %f", CelsiusValue + KelvinValue);
            return 0;
        }
        break;
        case 3:
        {

            double ThirtyTwo = 32, OnePointEight = 1.8, FarenheitValue;
            printf("You selected Farenheit to Celsius in Temperature\n");
            printf("Enter Farenheit value\n");
            scanf("%lf", &FarenheitValue);
            printf("In Celsius it will be %lf", (FarenheitValue - ThirtyTwo) / OnePointEight);
            return 0;
        }
        break;
        case 4:
        {

            double ThirtyTwo = 32, OnePointEight = 1.8, KelvinValue = 273.15, FarenheitValue;
            printf("You selected Farenheit to Kelvin in Temperature\n");
            printf("Enter Farenheit value\n");
            scanf("%lf", &FarenheitValue);
            printf("In Kelvin it will be %lf", (FarenheitValue - ThirtyTwo) / OnePointEight + KelvinValue);
            return 0;
        }
        break;
        case 5:
        {

            double KelvinNegative = 273.15, KelvinValue;
            printf("You selected Kelvin to Celsius in Temperature\n");
            printf("Enter Kelvin Value\n");
            scanf("%lf", &KelvinValue);
            printf("In Celsius it will be %lf", KelvinValue - KelvinNegative);
            return 0;
        }
        break;
        case 6:
        {

            double ThirtyTwo = 32, OnePointEight = 1.8, KelvinValue = 273.15, Kelvinscan;
            printf("You selected Kelvin to Farenheit in Temperature\n");
            printf("Enter Kelvin Value\n");
            scanf("%lf", &Kelvinscan);
            printf("In Farenheit it will be %lf", (Kelvinscan - KelvinValue) * OnePointEight + ThirtyTwo);
            return 0;
        }
        break;

        default:
            printf("You Entered invalid number");
            break;
        }
        break;

    default:
        printf("You Entered invalid number");
        break;
    }

    return 0;
}
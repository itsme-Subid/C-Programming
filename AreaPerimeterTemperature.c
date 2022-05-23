#include <stdio.h>
#include <conio.h>

void area();
void perimeter();
void temperature();
void circle_area();
void cylinder_area();
void rectangle_area();
void square_area();
void trapezium_area();
void triangle_area();
void circle_perimeter();
void equilateraltriangle_perimeter();
void isoscelestriangle_perimeter();
void rectangle_perimeter();
void square_perimeter();
void trapezoid_perimeter();
void triangle_perimeter();
void celsiustofarenheit_temperature();
void celsiustokelvin_temperature();
void farenheittocelsius_temperature();
void farenheittokelvin_temperature();
void kelvintocelsius_temperature();
void kelvintofarenheit_temperature();

void main()
{
    {
        do
        {
            int v;
            printf("For Area Enter 1\nFor Perimeter Enter 2\nFor Temperature Enter 3\nFor Exit Enter 0\n");
            scanf("%d", &v);
            switch (v)
            {
            case 0:
                goto stop;
            case 1:
                area();
                printf("\n");
                break;
            case 2:
                perimeter();
                printf("\n");
                break;
            case 3:
                temperature();
                printf("\n");
                break;
            default:
                printf("Something Went Wrong\nTry again\n\n");
                break;
            }
        } while (1);
    stop:
        printf("Thank You Visit Again\n");
        getch();
    }
}

void area()
{
    do
    {
        int v1;
        printf("You selected Area\nFor Circle Area enter 1\nFor Cylinder Area enter 2\nFor Rectangle Area enter 3\nFor Square Area enter 4\nFor Trapezium Area enter 5\nFor Triangle Area enter 6\nFor Main menu enter 0\n");
        scanf("%d", &v1);
        switch (v1)
        {
        case 0:
            main();
            printf("\n");
            break;
        case 1:
            circle_area();
            printf("\n");
            break;
        case 2:
            cylinder_area();
            printf("\n");
            break;
        case 3:
            rectangle_area();
            printf("\n");
            break;
        case 4:
            square_area();
            printf("\n");
            break;
        case 5:
            trapezium_area();
            printf("\n");
            break;
        case 6:
            triangle_area();
            printf("\n");
            break;

        default:
            printf("Something Went Wrong\nTry again\n\n");
        }
    } while (1);
}

void perimeter()
{
    do
    {
        int v2;
        printf("You selected Perimeter\nFor Circle Perimeter Enter 1\nFor Equilateral Triangle Perimeter Enter 2\nFor Isosceles Triangle Perimeter Enter 3\nFor Rectangle Perimeter Enter 4\nFor Square Perimeter Enter 5\nFor Trapezoid Perimeter Enter 6\nFor Triangle Perimeter Enter 7\nFor Exit Enter 0\n");
        scanf("%d", &v2);
        switch (v2)
        {
        case 0:
            main();
            printf("\n");
            break;
        case 1:
            circle_perimeter();
            printf("\n");
            break;
        case 2:
            equilateraltriangle_perimeter();
            printf("\n");
            break;
        case 3:
            isoscelestriangle_perimeter();
            printf("\n");
            break;
        case 4:
            rectangle_perimeter();
            printf("\n");
            break;
        case 5:
            square_perimeter();
            printf("\n");
            break;
        case 6:
            trapezoid_perimeter();
            printf("\n");
            break;
        case 7:
            triangle_perimeter();
            printf("\n");
            break;

        default:
            printf("Something Went Wrong\nTry again\n\n");
            break;
        }
    } while (1);
}

void temperature()
{
    do
    {
        int v2;
        printf("You selected Temperature\nFor Celsius to Farenheit enter 1\nFor Celsius to Kelvin enter 2\nFor Farenheit to Celsius enter 3\nFor Farenheit to Kelvin enter 4\nFor Kelvin to Celsius enter 5\nFor Kelvin to Farenheit enter 6\nFor Main menu enter 0\n");
        scanf("%d", &v2);
        switch (v2)
        {
        case 0:
            main();
            printf("\n");
            break;
        case 1:
            celsiustofarenheit_temperature();
            printf("\n");
            break;
        case 2:
            celsiustokelvin_temperature();
            printf("\n");
            break;
        case 3:
            farenheittocelsius_temperature();
            printf("\n");
            break;
        case 4:
            farenheittokelvin_temperature();
            printf("\n");
            break;
        case 5:
            kelvintocelsius_temperature();
            printf("\n");
            break;
        case 6:
            kelvintofarenheit_temperature();
            printf("\n");
            break;
        default:
            printf("Something Went Wrong\nTry again\n\n");
            break;
        }
    } while (1);
}

void circle_area()
{
    float radius, pi = 3.141592653589793238;
    printf("Enter radius of your circle\n");
    scanf(" %.2f", &radius);
    printf("The area of your circle is %.2f\n", pi * radius * radius);
}

void cylinder_area()
{
    float height, radius, pi = 3.141592653589793238;
    printf("Enter radius of your circle\n");
    scanf(" %.2f", &radius);
    printf("Enter height of your circle\n");
    scanf(" %.2f", &height);
    printf("Area of your Cylinder is %.2f", (2 * pi * radius * height) + (2 * pi * radius * radius));
}

void rectangle_area()
{
    float length, breadth;
    printf("Enter length of your rectangle\n");
    scanf(" %.2f", &length);
    printf("Enter breadth of your rectangle\n");
    scanf(" %.2f", &breadth);
    printf("\n");
    printf("Area of your rectangle is %.2f", length * breadth);
}

void square_area()
{
    double side;
    printf("Enter side of your square\n");
    scanf(" %.2f", &side);
    printf("Area of your square is %.2f", side * side);
}

void trapezium_area()
{
    float first_base, second_base, height, half = 0.5;
    printf("Enter first base length of your trapezium\n");
    scanf(" %.2f", &first_base);
    printf("Enter second base length of your trapezium\n");
    scanf(" %.2f", &second_base);
    printf("Enter height of your trapezium\n");
    scanf(" %.2f", &height);
    printf("Area of trapezium is %.2f", half * (first_base + second_base) * height);
}

void triangle_area()
{
    float half = 0.5, height, base;
    printf("Enter height of your triangle\n");
    scanf(" %.2f", &height);
    printf("Enter base of your triangle\n");
    scanf(" %.2f", &base);
    printf("Area of your triangle is triangle is %.2f", half * height * base);
}

void circle_perimeter()
{
    float pi = 3.141592653589793238, radius;
    printf("Enter radius of your circle\n");
    scanf(" %.2f", &radius);
    printf("Perimeter of your circle is %.2f\n", 2 * pi * radius);
}

void equilateraltriangle_perimeter()
{
    double a;
    printf("Enter side of your equilateral triangle\n");
    scanf(" %.2f", &a);
    printf("Perimeter of your equilateral triangle perimeter is %.2f \n", 3 * a);
}

void isoscelestriangle_perimeter()
{
    double a, b;
    printf("Enter side of your isosceles triangle\n");
    scanf(" %.2f", &a);
    printf("Enter base of your isosceles triangle\n");
    scanf(" %.2f", &b);
    printf("Perimeter of your isosceles triangle perimeter is %.2f \n", 2 * a + b);
}

void rectangle_perimeter()
{
    double a, b;
    printf("Enter length of your rectangle\n");
    scanf(" %.2f", &a);
    printf("Enter base of your rectangle\n");
    scanf(" %.2f", &b);
    printf("Perimeter of your rectangle perimeter is %.2f \n", 2 * (a + b));
}

void square_perimeter()
{
    double a;
    printf("Enter side of your square\n");
    scanf(" %.2f", &a);
    printf("Perimeter of your square is %.2f \n", 4 * a);
}

void trapezoid_perimeter()
{
    double a, b, c, d;
    printf("Enter 1st side of your trapezoid\n");
    scanf(" %.2f", &a);
    printf("Enter 2nd side of your trapezoid\n");
    scanf(" %.2f", &b);
    printf("Enter base side of your trapezoid\n");
    scanf(" %.2f", &c);
    printf("Enter 2nd base side of your trapezoid\n");
    scanf(" %.2f", &d);
    printf("Perimeter of your trapezoid is %.2f \n", a + b + c + d);
}

void triangle_perimeter()
{
    double a, b, c;
    printf("Enter 1st side of your triangle\n");
    scanf(" %.2f", &a);
    printf("Enter 2nd side of your triangle\n");
    scanf(" %.2f", &b);
    printf("Enter base side of your triangle\n");
    scanf(" %.2f", &c);
    printf("Perimeter of your triangle is %.2f \n", a + b + c);
}

void celsiustofarenheit_temperature()
{
    float CelsiusValue;
    printf("Enter Celsius value\n");
    scanf(" %.2f", &CelsiusValue);
    printf("In Farenheit it will be %.2f", (CelsiusValue * 1.8) + 32);
}

void celsiustokelvin_temperature()
{
    float CelsiusValue, KelvinValue = 273.15;
    printf("Enter Celsius value\n");
    scanf(" %.2f", &CelsiusValue);
    printf("In Kelvin it will be %.2f", CelsiusValue + KelvinValue);
}

void farenheittocelsius_temperature()
{
    double FarenheitValue;
    printf("Enter Farenheit value\n");
    scanf(" %.2f", &FarenheitValue);
    printf("In Celsius it will be %.2f", (FarenheitValue - 32) / 1.8);
}

void farenheittokelvin_temperature()
{
    double KelvinValue = 273.15, FarenheitValue;
    printf("Enter Farenheit value\n");
    scanf(" %.2f", &FarenheitValue);
    printf("In Kelvin it will be %.2f", (FarenheitValue - 32) / 1.8 + KelvinValue);
}

void kelvintocelsius_temperature()
{
    double KelvinNegative = 273.15, KelvinValue;
    printf("Enter Kelvin Value\n");
    scanf(" %.2f", &KelvinValue);
    printf("In Celsius it will be %.2f", KelvinValue - KelvinNegative);
}

void kelvintofarenheit_temperature()
{
    double KelvinValue = 273.15, Kelvinscan;
    printf("Enter Kelvin Value\n");
    scanf(" %.2f", &Kelvinscan);
    printf("In Farenheit it will be %.2f", (Kelvinscan - KelvinValue) * 1.8 + 32);
}
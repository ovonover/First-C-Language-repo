/* C program demonstrating the uses of functions to calculate the area and circumference of a circle by passing
    the radius by value. */

// Pre-processor directive(s).
#include <stdio.h>
#include <math.h>

// Declare a function prototype (function declaration) for the squarer() function.
float calc_area(float radius);
float calc_circumference(float radius);
void display_dimensions(float radius, float area, float circumference);

// Main function begins program execution
int main()
{
    // Variable(s) to be used in the program
    float rad;

    // Prompt the user for the circle's radius.
    printf("Please enter the radius of the circle in CM ->\n");
    scanf("%f", &rad);

    //Caluclate the circle's area & circumference by passing the rad(radius) by value.
    float area = calc_area(rad);
    float circumference = calc_circumference(rad);

    //Display the circle's dimensions.
    display_dimensions(rad,area,circumference);

    return 0;

} // End of fucntion main()

// Function definition of the calc_circumference function.
float calc_circumference(float radius)
{
    return 3.141592 * (radius * 2);

} // End of function calc_circumference.


// Function definition of the calc_area function.
float calc_area(float radius)
{
    // longer code, less efficient.
    //float area  = 3.141592 * pow(radius, 2);
    //return area;
     
    // Less code, more efficient.
    return 3.141592 * pow(radius, 2);

} // End of function calc_area.


// Function definition of the display_dimensions() function.
void display_dimensions(float radius, float area, float circumference)
{
    printf("\nCircle\'s Dimensions");
    printf("\n---------------------------");
    printf("\n%-13s: %6.2f CM.", "Radius", radius);
    printf("\n%-13s: %6.2f CM2.", "Area", area);
    printf("\n%-13s: %6.2f CM.", "Circumference", circumference);
    printf("\n---------------------------");
} // End of function display_dimensions().
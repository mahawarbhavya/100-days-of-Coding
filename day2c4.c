#include <stdio.h> // Required for input/output functions like printf and scanf

int main() {
    float radius;    // Declare a variable to store the radius
    float area;      // Declare a variable to store the area
    float circumference; // Declare a variable to store the circumference
    const float PI = 3.14159; // Define PI as a constant float

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    // Read the radius from the user and store it in the 'radius' variable
    scanf("%f", &radius);

    // Calculate the area of the circle using the formula A = PI * r * r
    area = PI * radius * radius;

    // Calculate the circumference of the circle using the formula C = 2 * PI * r
    circumference = 2 * PI * radius;

    // Display the calculated area
    printf("The area of the circle is: %.2f\n", area);
    // Display the calculated circumference
    printf("The circumference of the circle is: %.2f\n", circumference);

    return 0; // Indicate successful program execution
}

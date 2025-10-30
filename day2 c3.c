#include <stdio.h>

int main() {
    float length, breadth; // Declare variables for length and breadth
    float area, perimeter;  // Declare variables for area and perimeter

    // Prompt the user to enter the length
    printf("Enter the length of the rectangle: ");
    // Read the length from the user
    scanf("%f", &length);

    // Prompt the user to enter the breadth
    printf("Enter the breadth of the rectangle: ");
    // Read the breadth from the user
    scanf("%f", &breadth);

    // Calculate the area
    area = length * breadth;

    // Calculate the perimeter
    perimeter = 2 * (length + breadth);

    // Print the calculated area
    printf("Area of the rectangle: %.2f\n", area);
    // Print the calculated perimeter
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0; // Indicate successful execution
}









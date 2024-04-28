
//  C Program to find area of rectangle

#include <stdio.h>

int main()
{
    // Declaring Variable
    float length, width, area;

    // Taking Input length and width of rectangle
    printf("Enter length of rectangle:");
    scanf("%f", &length);
    printf("Enter width of rectangle:");
    scanf("%f", &width);

    // Calculate the area of rectangle
    area = length * width;

    // Displaying the result
    printf("Area of rectangle = %f ", area);

    return 0;
}

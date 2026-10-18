#include <stdio.h>

int main() {
    // Variable declaration and initialization
    int age = 25;              // Integer variable
    float height = 5.9;        // Floating point variable
    char grade = 'A';          // Character variable
    const float PI = 3.14159;  // Constant value
    
    // Changing variable values
    age = 26;
    height = 6.1;
    
    // Using variables in calculations
    float radius = 5.0;
    float area = PI * radius * radius;
    
    // Display values
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);
    printf("Area of circle: %.3f\n", area);
    
    return 0;
}
#include <stdio.h>

int main() {
    // Output examples
    printf("Hello, World!\n");  // Basic output
    printf("This is line 1.\nThis is line 2.\n");  // Multiple lines
    
    // Formatting output
    int age = 25;
    float height = 5.9;
    char grade = 'A';
    
    printf("Age: %d years\n", age);
    printf("Height: %.1f feet\n", height);  // .1 means 1 decimal place
    printf("Grade: %c\n", grade);
    
    // Input examples
    int userAge;
    float userHeight;
    char userName[50];
    
    printf("Enter your age: ");
    scanf("%d", &userAge);
    
    printf("Enter your height: ");
    scanf("%f", &userHeight);
    
    printf("Enter your name: ");
    scanf("%s", userName);  // Note: no & for arrays/strings
    
    // Display collected information
    printf("\n--- Your Information ---\n");
    printf("Name: %s\n", userName);
    printf("Age: %d\n", userAge);
    printf("Height: %.1f\n", userHeight);
    
    return 0;
}
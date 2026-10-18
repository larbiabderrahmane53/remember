#include <stdio.h>

int main() {
    // Conditional example: Grade calculator
    int score;
    printf("Enter your score (0-100): ");
    scanf("%d", &score);
    
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    
    // Loop example: Multiplication table
    int num, i;
    printf("\nEnter a number for multiplication table: ");
    scanf("%d", &num);
    
    printf("Multiplication table of %d:\n", num);
    for(i = 1; i <= 10; i++) {
        printf("%d × %d = %d\n", num, i, num * i);
    }
    
    // While loop example: Sum until negative
    int sum = 0, input;
    printf("\nEnter numbers to sum (negative to stop):\n");
    
    while(1) {  // infinite loop
        scanf("%d", &input);
        if (input < 0) {
            break;  // exit loop
        }
        sum += input;
    }
    
    printf("Total sum: %d\n", sum);
    
    return 0;
}
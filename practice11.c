#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);
void greet(char name[]);
float calculateAverage(int arr[], int size);
int factorial(int n);

int main() {
    // Using the add function
    int result = add(5, 3);
    printf("5 + 3 = %d\n", result);
    
    // Using the greet function
    greet("Alice");
    
    // Using calculateAverage function
    int numbers[] = {85, 90, 78, 92, 88};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    float avg = calculateAverage(numbers, size);
    printf("Average: %.2f\n", avg);
    
    // Using factorial function
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}

// Function definition - adds two numbers
int add(int a, int b) {
    return a + b;
}

// Function with no return value
void greet(char name[]) {
    printf("Hello, %s! Welcome to the program.\n", name);
}

// Function that works with arrays
float calculateAverage(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

// Recursive function - calls itself
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
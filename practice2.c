#include <stdio.h>

int main() {
    // Arithmetic operations
    int a = 10, b = 3;
    printf("a + b = %d\n", a + b);  // 13
    printf("a - b = %d\n", a - b);  // 7
    printf("a * b = %d\n", a * b);  // 30
    printf("a / b = %d\n", a / b);  // 3 (integer division)
    printf("a %% b = %d\n", a % b); // 1 (remainder)
    
    // Comparison operations
    printf("a == b: %d\n", a == b); // 0 (false)
    printf("a != b: %d\n", a != b); // 1 (true)
    printf("a > b: %d\n", a > b);   // 1 (true)
    
    // Working with different data types
    float x = 10.5, y = 3.2;
    printf("x / y = %.2f\n", x / y); // 3.28
    
    char c1 = 'A', c2 = 'B';
    printf("Characters: %c and %c\n", c1, c2);
    
    return 0;
}
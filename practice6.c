#include <stdio.h>

int main() {
    // Declaring and initializing arrays
    int numbers[5] = {10, 20, 30, 40, 50};  // Size 5 array
    float temperatures[7];  // Empty array of size 7
    
    // Accessing array elements
    printf("First element: %d\n", numbers[0]);  // 10
    printf("Third element: %d\n", numbers[2]);  // 30
    
    // Changing array elements
    numbers[1] = 25;
    printf("Modified second element: %d\n", numbers[1]);  // 25
    
    // Looping through arrays
    printf("All elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // Calculating average
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    float average = (float)sum / 5;
    printf("Average: %.2f\n", average);
    
    return 0;
}
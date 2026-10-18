#include <stdio.h>
#include <string.h>  // For string functions

int main() {
    // Different ways to declare strings
    char str1[] = "Hello";  // Automatic size (6: 5 chars + \0)
    char str2[10] = "World";  // Fixed size
    char str3[20];  // Empty string
    
    // String input
    printf("Enter your name: ");
    scanf("%s", str3);  // Note: no & for strings
    
    // String output
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("String 3: %s\n", str3);
    
    // String functions from string.h
    printf("Length of '%s': %lu\n", str1, strlen(str1));
    
    // String copying
    char copy[20];
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);
    
    // String concatenation
    strcat(copy, " ");
    strcat(copy, str2);
    printf("After concatenation: %s\n", copy);
    
    // String comparison
    if (strcmp(str1, "Hello") == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are different\n");
    }
    
    // Character-by-character processing
    printf("Characters in '%s': ", str1);
    for(int i = 0; str1[i] != '\0'; i++) {
        printf("%c ", str1[i]);
    }
    printf("\n");
    
    return 0;
}
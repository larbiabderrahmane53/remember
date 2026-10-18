#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to input student data
void inputStudent(struct Student *s) {
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
}

// Function to display student data
void displayStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("-------------------\n");
}

// Function to find student with highest marks
int findTopper(struct Student students[], int n) {
    int maxIndex = 0;
    float maxMarks = students[0].marks;
    
    for(int i = 1; i < n; i++) {
        if(students[i].marks > maxMarks) {
            maxMarks = students[i].marks;
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    // Input all students
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        inputStudent(&students[i]);
    }
    
    // Display all students
    printf("\n--- Student Records ---\n");
    for(int i = 0; i < n; i++) {
        displayStudent(students[i]);
    }
    
    // Find and display topper
    int topperIndex = findTopper(students, n);
    printf("--- Topper ---\n");
    displayStudent(students[topperIndex]);
    
    return 0;
}
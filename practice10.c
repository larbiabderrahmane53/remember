#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float gpa;
    char grade;
};

int main() {
    // Declare structure variables
    struct Student student1;
    struct Student student2 = {"Bob", 20, 3.8, 'A'};
    
    // Accessing structure members
    strcpy(student1.name, "Alice");
    student1.age = 22;
    student1.gpa = 3.9;
    student1.grade = 'A';
    
    // Display structure data
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    printf("Grade: %c\n\n", student1.grade);
    
    printf("Student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("GPA: %.2f\n", student2.gpa);
    printf("Grade: %c\n\n", student2.grade);
    
    // Array of structures
    struct Student class[3] = {
        {"Charlie", 21, 3.5, 'B'},
        {"Diana", 23, 3.2, 'B'},
        {"Eve", 19, 3.7, 'A'}
    };
    
    // Display all students
    printf("Class Roster:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d. %s, Age: %d, GPA: %.2f, Grade: %c\n", i+1, class[i].name, class[i].age, class[i].gpa, class[i].grade);
    }
    
    // Nested structures
    struct Date {
        int day;
        int month;
        int year;
    };
    
    struct Person {
        char name[50];
        struct Date birthday;
    };
    
    struct Person person1 = {"John", {15, 8, 1990}};
    
    printf("\nPerson: %s\n", person1.name);
    printf("Birthday: %d/%d/%d\n", person1.birthday.day, person1.birthday.month, person1.birthday.year);
    
    return 0;
}
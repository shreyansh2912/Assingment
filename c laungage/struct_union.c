#include <stdio.h>
#include <string.h>
struct Student 
{
    int rollnumber;
    char name[50];
    float marks;
};

union Data
{
    int num;
    char letter;
};

int main()
{
    
    struct Student student1;
    student1.rollnumber = 101;
    strcpy(student1.name, "John Doe");
    student1.marks = 85.5;

    printf("Student Details (Structure):\n");
    printf("Roll Number: %d\n", student1.rollnumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n\n", student1.marks);

    // Union example
    union Data data;
    data.num = 65;

    printf("Data (Union):\n");
    printf("Number: %d\n", data.num);

    data.letter = 'A'; // Overwrites the 'num' member

    printf("Letter: %c\n\n", data.letter);
    printf("Number: %d\n", data.num); // Shows a different value now

    return 0;
}
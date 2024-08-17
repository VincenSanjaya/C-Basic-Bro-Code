#include <stdio.h>

int main()
{
    /*
    Variables = allocated space in memory to store data/value
    Data types:
    int - integer
    float - floating point number
    double - double precision floating point number
    char - character
    */

    int x;      // declaration
    x = 10;     // initialization
    int y = 20; // declaration and initialization

    int age = 30; // integer
    float gpa = 3.4; // floating point number
    double gpa2 = 3.4; // double precision floating point number
    char grade = 'A'; // character
    char name[] = "John"; // string

    printf("Age: %d\n", age);
    printf("GPA: %f\n", gpa);
    printf("GPA2: %f\n", gpa2);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);
}
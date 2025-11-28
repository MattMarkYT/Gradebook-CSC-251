#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Gradebook.h"

#define GRADEBOOK_CAPACITY 100

// Declare static variables
static Student studentArray[GRADEBOOK_CAPACITY];
static Student *studentArrayP = studentArray;
static int size = 0; // size of the gradebook --> tells us how many are currently inside the gradebook 

//might take this method out 
//Prints inputed Student info
void printStudent(Student s)
{  
  printf("Name: %s\n", s.name);
  printf("ID: %d\n", s.ID);
  printf("Grade: %.2f\n", s.grade);
}

// Adding a Student
void addStudent()
{
  int ID;
  double grade;
  char name[128];

  printf("Please enter the student's name: ");
  scanf("%127s[^\n]", name); // prompt user for name (up to 128 characters, including spaces so we can add last names)
  student[size].name = name;

  printf("Please enter the student's ID number: ");
  scanf("%d", &ID");
  student[size].ID = ID;
 
  printf("Please enter the student's grade: ");
  scanf("%lf", &grade);
  student[size].grade = grade;  
  
  size++; // student has been added, increase size by 1
}

/* Setting and Getting Gradebook */

// THIS IS INCOMPLETE, NEED TO WORK ON IT
void setGradebook(int size, Student* studentsArray) {
  if (size == 0) // edge case: the gradebook is empty                          
  { 
    printf("Error: The gradebook is empty.\n");
  }
  else {        // The gradebook has at least one student inside
    for (int i = 0; i < size; i++)
    {
      *studentsArray[i]
    }
  

  }

}


//example to show usage 
// will be updated to get multiple student(s) later on
int main(){
  Student s;
  printf("Enter the student(s) name: ");
//  scanf("%c", &s.name);
  printf("Enter student(s) ID: ");
//  scanf("%d", &s.ID;
  printf("Enter student(s) grade: ");
//  scanf("%lf", &s.grade);

// will add more error handling later
// proper input handling for the grade
    if (s.grade < 0.0 || s.grade > 100.0)
    {
        fprintf(stderr, "Error: Grade must be between 0 and 100.\n");
        return 1;
    }
    printStudent(s);
  return 0;
}





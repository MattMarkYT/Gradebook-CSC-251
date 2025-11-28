#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Gradebook.h"

#define GRADEBOOK_CAPACITY 100

// Declare static variables
static Student studentArray[GRADEBOOK_CAPACITY];
static Student *studentArrayP = studentArray;
static int size = 0; // size of the gradebook --> tells us how many are currently inside the gradebook 

// 1. Adding a Student
void addStudent()
{
  int ID;
  double grade;
  printf("Please enter the student's name: ");
  scanf(" %127[^\n]", studentArray[size].name); // prompt user for name (up to 127 characters besides newline, so we can add last names)

  printf("Please enter the student's ID number: ");
  scanf("%d", &ID);
  while (ID < 0) // negative ID does not make sense
  {
    printf("Error: ID cannot be negative.\n");
    printf("Please re-enter the student's ID number: ");
    scanf("%d", &ID);
  }
  studentArray[size].ID = ID;
 
  printf("Please enter the student's grade: ");
  scanf("%lf", &grade);
  while (grade < 0.0 || grade > 100.0) // if grade goes out of bounds
  {
    printf("Error: Grade is out-of-bounds.\n");
    printf("Please re-enter the student's grade: ");
    scanf("%lf", &grade);
  }
  studentArray[size].grade = grade;
  
  size++; // student has been added, increase size by 1
  printf("Student has successfully been added!\n");
}

// 2. Updating a Student




// 3. Finding a Student





// 4. Listing Students
void listStudents()
{
  printf("LIST OF STUDENTS\n");
  printf("-------------------------------------------------\n");
  for (int i = 0; i < size; i++)
  {
    printf("Name: %s\n", studentArray[i].name);
    printf("ID: %d\n", studentArray[i].ID);
    printf("Grade: %.2f\n", studentArray[i].grade);
    printf("-------------------------------------------------\n");      
  }
}





/* Setting and Getting Gradebook */

/* THIS IS INCOMPLETE, NEED TO WORK ON IT
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

} */





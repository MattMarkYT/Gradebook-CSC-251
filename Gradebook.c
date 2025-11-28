#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Gradebook.h"

#define GRADEBOOK_CAPACITY 100

// Declare static variables
static Student studentArray[GRADEBOOK_CAPACITY];
static Student *studentArrayP = studentArray;
static int size = 0; // size of the gradebook --> tells us how many are currently inside the gradebook 

// 1. Adding a Student --> still need to handle if the list is at max capacity, also check avoiding duplicate IDs logic
void addStudent()
{
  int ID;
  double grade;
  
  // Ask for student's name
  printf("Please enter the student's name: ");
  scanf(" %127[^\n]", studentArray[size].name); // prompt user for name (up to 127 characters besides newline, so we can add last names)

  // Ask for student's ID number (cannot be negative, and the number must be unique)
  printf("Please enter the student's ID number: ");
  scanf("%d", &ID);
  
  while (1) // infinite loop purposefully made; we only get out of it if the student ID is unique and positive.
  {
    // Check 1: Make sure that the student ID is unique. This will only run after one student is entered.
    for (int i = 0; i < size; i++)
    {
      if (studentArray[i].ID == ID) // ask user again if the ID is not unique
      {
        printf("Error: ID is already being used by another student.\n");
        printf("Please re-enter the student's ID number: ");
        scanf("%d", &ID);
      }
    }
  
  // Check 2: Make sure that the ID is not negative.
    if (ID < 0) // negative ID does not make sense
    {
    printf("Error: ID cannot be negative.\n");
    printf("Please re-enter the student's ID number: ");
    scanf("%d", &ID);
    }

    if (studentArray[i].ID != ID && ID > 0) 
    {
      break; 
    }
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
void updateStudent()
{
  int studentID;

  // Ask user for ID number
  printf("Please enter the student's ID number: ");
  scanf("%d", &studentID);
  while (studentID < 0) // negative ID does not make sense
  {
    printf("Error: ID cannot be negative.\n");
    printf("Please re-enter the student's ID number: ");
    scanf("%d", &studentID);
  }
  
  // Search for user through the list
  for (int i = 0; i < size; i++)
  {
    if (studentArray[size].ID == studentID)
    {
      printf("Student has been found in the gradebook.\n");
     
      // Ask user if they would like to change the student's name
      printf("Would you like to change the student's name? Enter [Y/N]: ");
      
      // Ask the user if they would like to change the student's grade
      printf("Would you like to change the student's grade? Enter [Y/N]: ");

    }
  }

} 




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





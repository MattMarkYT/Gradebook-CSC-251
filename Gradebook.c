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
  int selection = 'x';
  int changeSuccess = 0;
  for (int i = 0; i < size; i++)
  {
    if (studentArray[i].ID == studentID)
    {
      printf("Student has been found in the gradebook.\n");
     
      // Ask user if they would like to change the student's name
      printf("Would you like to change the student's name? Enter [Y/N]: ");
      scanf("%d", &selection");
      if (selection = 'Y' || selection == 'y')
      {
        printf("Please enter the student's new name: ");
        scanf(" %127[^\n]", &studentArray[i].name);
      }

      // Ask the user if they would like to change the student's grade
      printf("Would you like to change the student's grade? Enter [Y/N]: ");
      scanf("%d", &selection");
      if (selection = 'Y' || selection == 'y')
      {
        printf("Please enter the student's new grade: ");
        scanf("%lf", &studentArray[i].grade");
        while (grade < 0.0 || grade > 100.0) // if grade goes out of bounds
        {
          printf("Error: Grade is out-of-bounds.\n");
          printf("Please re-enter the student's new grade: ");
          scanf("%lf", &studentArray[i].grade);
        }
      }
      changeSuccess = 1;
      break;
    }
  }
  
  // Verification and No Matching User
  if (changeSuccess)
    printf("Student has successfully been updated.\n");
  else
    printf("No student has the matching ID number.");
  return 0;

} 




// 3. Finding a Student
void findStudent()
{
  //if the there are no students, prints empty
  int studentID;
  if (size == 0) {
    printf("gradebook is empty");
    return;
  }
  printf("Please enter the student's ID: ");
  scanf("%d", &studentID);

  while (studentID < 0) {
    printf("Error: ID cannot be negative.\n");
    printf("Please re-enter the student's ID number: ");
    scanf("%d", &studentID);
  }
  //seaching for student
  int found = 0;
  for (int i = 0; i < size; i++) {
    if (studentArray[i].ID == studentID) {
      found = 1;
      printf("Student found in gradebook.\n");
      printf("Name: %s\n", studentArray[i].name);
      printf("ID: %d\n", studentArray[i].ID);
      printf("Grade: %.2f\n", studentArray[i].grade);
      break;
    }
  }
  if (!found) {
    printf("Student ID %d not found in the gradebook.\n", studentID);
  }
}

// 4. deleting a student
void deleteStudent(){
  int studentID;
  //prints empty if there are no students
  if (size == 0) {
    printf("gradebook is empty.\n");
    return;
  }

  printf("Enter the student's ID you want to delete");
  scanf("%d", &studentID);

  while (studentID < 0) {
    printf("Error: ID cannot be negative.\n");
    printf("Please re-enter the student's ID number: ");
    scanf("%d", &studentID);
  }
  int index = -1;
  for (int i = 0; i < size; i++){
    if (studentArray[i].ID == studentID) {
      index = i;
      break;
    }
  }

  //not found
  if (index == -1) {
    printf("Student ID %d not found.\n", studentID);
    return;
  }
  // found -> delete by shifting array left
  for (int i = index; i < size - 1; i++) {
    studentArray[i] = studentArray[i + 1];
  }
  size --; // one less student now 
printf("Student ID %d has now been deleted.\n", studentID);
}


// 5. Listing Students
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





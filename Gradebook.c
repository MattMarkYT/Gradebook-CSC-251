#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Gradebook.h"

//might take this method out 
//Prints inputed Student info
   void printStudent(Student s)
{  
  printf("Name: %s\n", s.name);
  printf("ID: %d\n", s.ID);
  printf("Grade: %.2f\n", s.grade);
}


//exapmle to show usage 
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

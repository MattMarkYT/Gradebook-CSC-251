# CSC 251 Final Project - Student Gradebook
This student gradebook is a project that stores the name, ID, and grade of a student in a class. These parameters can be viewed, updated, and saved with ease.
------------------------------------------------------------------------------
## Build/Run Instructions
Before building, ensure you have gcc or cc.

To build the program, use:
gcc -o gradebook Gradebook.c Stats.c FileHandler.c Sorter.c main.c

This will build an executable file called:
gradebook

To run the program after building, use:
./gradebook
------------------------------------------------------------------------------
## Input Format
In main.c (aka Gradebook Menu)
Users will first be prompted to enter a number from 0-8 in the menu. Each number has a specific task as listed on the menu.

1. Creating/Updating a Student Name
- When users add a new student, they may enter a new name. The name only supports up to 127 characters (spaces allowed).
- When users update a student's name, they must also enter a name with a maximum of 127 characters (spaces allowed).

2. Creating a student ID
- When creating a student ID, the ID must be:
     - of type integer
     - non-negative
     - unique
- Once a unique student ID has been made, it cannot be changed.

3. Creating/Updating a Student's Grade
- When creating or updatinga Student's grade, the number must be:
     - of type double
     - within the range of 0.0 to 100.0
 
4. Finding / Deleting a Student
- When finding or deleting a student, the user must provide the exact student ID (as an integer).
- Providing the proper ID for a student when finding them will list their name, ID, and grade.
- Providing the proper ID for a student when deleting them from the system will simply provide a confirmation message, and remove them from the list.

5. Listing all Students / Statistics / Sorting / Saving / Exit
- When the statistics of a student is required, the user simply needs to input the respective number for stats in the menu.
     - The statistics will list the average grade for the class, lowest grade, and highest grade.
 
- When the list of all students is required, the user simply needs to input the respective number for stats in the menu.
     - The list will show all the students in the gradebook.
 
- When the list of students needs to be sorted, the user simply needs to input the respective number for sort in the menu.
     - The sorter will sort all the students in alphabetical order.

- When the list of students needs to be saved, the user simply needs to input the respective number for save in the menu.
     - The program will save the list of students as stored in the array. When it is opened again, it can be reloaded.
 
- When exiting. the user simply needs to input 0.
     - Inputting 0 will exit out of the program and safely close it.
------------------------------------------------------------------------------
## Known Limitations
- due to the use of a static array, the maximum amount of students in the gradebook is set to 100.






------------------------------------------------------------------------------
## Work Breakdown
Matthew Marquez - Team Leader
- Guided the creation of project structure and oversaw logic
- Implemented FileHandler.c and FileHandler.h
- in Gradebook.c, implemented getGradebook()

Kristopher Manalang 
- implemented Stats.h and Stats.c
- in Gradebook.c, implemented addStudent(), listStudents(), updateStudent(), setGradebook(), getSize()

Erick Estrada
- implemented Gradebook.c --> deleteStudent(), findStudent()
- implemented Gradebook.h
  
Gerber Gonzalez
- implemented Sorter.h and Sorter.c

Steve
- implemented main.c (overall UI and menu) 

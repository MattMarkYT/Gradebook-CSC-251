// Student Data Type
typedef struct Student
{
	char[] name;
	int ID;
	double grade;
};

/* Run From Main */
printf("Enter students name(s):");
//scanf(); this is where the scan function should be

printf("Enter student ID's:");
//scanf();

printf("Enter grade(s):");
//scanf();

// allows the user to add a student, their ID, and grade (score and letter grade equivalent).
void addStudent();

// allows the user to update the information of an existing student. If the student does not exist 
// in the structure, display that “user does not exist in file.” If the student does exist, ask what 
// to update and update that info accordingly.
void updateStudent();

// allows the user to remove a student.
void deleteStudent();

// determine whether a student exists or not
void findStudent();

// display the list of students available. It will display each student’s name, ID and grade.
void listStudents();

/* Run From FileHandler/Sorter */

// Sets the Gradebook Student array
void setGradebook(Student[] studentsArray);

// Gets the Gradebook Student array
Student[] getGradebook();



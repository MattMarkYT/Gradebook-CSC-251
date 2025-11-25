// Student Data Type
typedef struct Student
{
	char name[128];
	int ID;
	double grade;
} Student;

/* Run From Main */

// allows the user to add a student, their ID, and grade (score and letter grade equivalent).
// Notes:	Get input from user, put the information in studentsArray[size], then increment size
void addStudent();

// allows the user to update the information of an existing student. If the student does not exist 
// in the structure, display that “user does not exist in file.” If the student does exist, ask what 
// to update and update that info accordingly.
// Notes:	Get ID from user and search the students for that ID.
//			If not found, display “Student does not exist in Gradebook.”
//			If found, let the user input new name and grade (empty string means do not update name)
void updateStudent();

// allows the user to remove a student.
// Notes:	Simply decrement size
void deleteStudent();

// determine whether a student exists or not
// Notes:	Get ID from user and search the students for that ID
//			If not found, display “Student does not exist in Gradebook.”
//			If found, display the Student's information
void findStudent();

// display the list of students available. It will display each student’s name, ID and grade.
// Notes:	Display all Student's information one by one
void listStudents();

/* Run From FileHandler/Sorter/Stats */

// Sets the Gradebook Student array
// Notes: 	Copy all the elements from the argument array to gradebook's array
// 			Make sure size isn't above the max limit (clamp)
void setGradebook(int size, Student* studentsArray);

// Gets the Gradebook Student array
// Notes:	Use malloc to create a copy of the array (Advanced method so feel free to ask questions)
Student* getGradebook();



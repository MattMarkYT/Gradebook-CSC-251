#include "Stats.h" // note: we already did "#include Gradebook.h" inside Stats.h, so no need to do it again.

// 1. Display all the statistical analysis
void computeStats() // no arg for simplicity
{
  // note: getStudents() comes from Gradebook file. This contains the array itself
  double meanGrade = mean(getStudents());
  double minGrade = min(getStudents());
  double maxGrade = max(getStudents()));

  printf("Average grade for this course: %.2f\n", meanGrade);
  printf("Lowest grade for this course: %.2f\n", minGrade);
  printf("Highest grade for this course: %.2f\n", maxGrade);
}

// 2. Get the mean grade
static double mean(Student s[])
{
  double avgGrade, sum;
  int sizeOfClass = getSize();
  
  // loop through the entire struct (aka the array of students), which will allow us to obtain the sum of all grades
  for (int i = 0; i < sizeOfClass; i++)
  {
    sum += s[0].grade;
  }
  
  // compute the average grade --> the average is the sum of all grades divided by the total number of students
  avgGrade = sum / (double) sizeOfClass();

  return avgGrade;
}

// 3. Get the lowest grade
static double min(Student s[])
{
  double lowestGrade = s[0].grade; // for initialization, the lowest grade is at index 0. However, this will be changed by comparing to all the other students.
  int sizeOfClass = getSize();
  // loop through the entire class, and compare the previous student to the next to see which has a lower grade. The lower grade of the two for that iteration
  // is the new min.
  for (int i = 1; i < sizeOfClass; i++)
  {
    if (s[i].grade < lowestGrade)
    {
      lowestGrade = s[i].grade;
    }
  }

  return lowestGrade;
}

// 4. Get the highest grade
static double max(Student s[])
{
  double highestGrade = s[0].grade // for initialization, assume the highest grade is at index 0. This will change as we compare to all students in the database
  int sizeOfClass = getSize();
  
  // loop through the entire class, and compare the previous student to the next. The higher grade of the two is the new highest grade.
  for (int i = 1; i < sizeOfClass; i++)
  {
    if (s[i].grade > highestGrade)
    {
      highestGrade = s[i].grade;
    }
  }
 
  return highestGrade;
}

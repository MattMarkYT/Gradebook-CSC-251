#ifndef STATS_H
#define STATS_H

# include "Gradebook.h" // We include this so that we have access to the struct "Student".

// 1. display the statistics of the class all at once (Reason: avoid unnecessary function calls)
void ComputeStats();

// 2. Mean function --> Calculates the average of all grades
double mean(Student s);

// 3. Minimum --> Finds the lowest grade of all students
double min(Student s);

// 4. Maximum --> Finds the highest grade of all students
double max(Student s);

#endif

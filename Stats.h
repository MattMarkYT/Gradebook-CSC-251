#ifndef STATS_H
#define STATS_H

#include "gradebook.h"

// 1. display the statistics of the class all at once (Reason: avoid unnecessary function calls)
void ComputeStats(Student s); // must pass struct Student, so that we can pass it to the functions inside this one
			      // in this case, we are passing by value
#endif

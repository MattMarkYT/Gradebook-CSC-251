#ifndef STATS_H
#define STATS_H

// 1. display the statistics of the class all at once (Reason: avoid unnecessary function calls)
void computeStats(); // must pass struct Student, so that we can pass it to the functions inside this one
		     // in this case, we are passing by value. This is a no arg because we do not want dependency on inputting the struct array.

#endif

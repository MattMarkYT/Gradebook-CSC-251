#include "Sorter.h"
#include <string.h>
#include "Gradebook.h"

/* Compares students names using pointers and strcmp
returns if a or b is bigger or if they are equal does it based off first name due to reading the string */
int cmpByName(const void* a, const void* b) {
    const Student* sa = (const Student*)a;
    const Student* sb = (const Student*)b;

    return strcmp(sa->name, sb->name);
}


/* insertion sort method */
void sort() {
    // get the gradebook array
    Student* arr = getGradebook();

    int size = getSize();   // Tracks size of array 

    //Starts at index 1 and compares to previous element using cmpByName 
   
    for (int i = 1; i < size; i++) {
        Student key = arr[i];
        int j = i - 1;
        //if cmpByName returns >0 shifts element over*/
        while (j >= 0 && cmpByName(&arr[j], &key) > 0) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    // store back the sorted gradebook
    setGradebook(size, arr);
}





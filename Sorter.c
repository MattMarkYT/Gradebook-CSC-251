#include "Sorter.h"
#include <string.h>
#include "Gradebook.h"

int cmpByName(const void* a, const void* b) {
    const Student* sa = (const Student*)a;
    const Student* sb = (const Student*)b;

    return strcmp(sa->name, sb->name);
}


/* basic insertion sort needs to be adjusted to fit in chosen key*/
void sort() {
    // get the gradebook array
    Student* arr = getGradebook();

    int size = getSize();   // Tracks size of array 

    for (int i = 1; i < size; i++) {
        Student key = arr[i];
        int j = i - 1;

        while (j >= 0 && cmpByName(&arr[j], &key) > 0) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    // store back the sorted gradebook
    setGradebook(size, arr);
}





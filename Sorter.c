#include "Sorter.h"

int cmp(){}


/* basic insertion sort needs to be adjusted to fit in chosen key*/
void sort(int arr[],int n){
    for(int i =1 ; i < n; i++){
        int temp = arr[i];
        int j = i-1;

        while(j>= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j = j-1;

        }
        arr[j+1] = temp;
     }




}
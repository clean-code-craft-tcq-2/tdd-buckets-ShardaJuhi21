

#include "CurrentManagement.h"
#include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
int * Sort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
        return arr;
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int * CountReadings(int * SortedArray, n){
    int *array;
    array = (int*)calloc(MAX_NUMBER_OF_READINGS, sizeof(int));
    
    for(int i=0; i<n; i++)
    {
        int index = SortedArray[i];
        array[index]++;
    }
    return array;

}

bool DetectRange(int *Array, int n){
 
      printf("Original array: \n");
      printArray(Array, n);
 
   int* SortedArray = Sort(Array, n);
   int* Readings = CountReadings(SortedArray, n);
    printf("\nSorted array in Ascending order: \n");
    printArray(Array, n);
    return TRUE;
}

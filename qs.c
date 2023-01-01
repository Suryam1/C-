#include<stdio.h>

// To print array of length=size
void printArray(int array[], int size)    
{
  int i;
  for (i=0; i < size; i++)
    printf("%d\t", array[i]);
  printf("\n");
}

// To swap two elements
void swap(int* a, int* b)    
{
  int t = *a;
  *a = *b;
  *b = t;
}

/* This function takes last element as pivot, and places all smaller
   elements to left of pivot and all greater elements to right of pivot */
int partition (int array[], int low, int high)
{
  int pivot=array[high];
  int i=low-1;
  for (int j=low;j<=high-1;j++){
    if(array[j]<=pivot){
        i++;
        swap(&array[j],&array[i]);
    }
  }
  swap(&array[i+1],&array[high]);
  return (i+1);
}

// Recursive function to sort array with quicksort
void quickSort(int array[], int low, int high)
{
  if(low<high){
    int pivot_index;
    pivot_index = partition(array,low,high);
    quickSort(array,low,pivot_index-1);
    quickSort(array,pivot_index+1,high);
  }
}
int main()
{
  int array[] = {17, 13, 20, 16, 19, 24, 22, 21};
  int n = sizeof(array)/sizeof(array[0]);
  printf("Given array: \n");
  printArray(array, n);
  quickSort(array, 0, n-1);
  printf("Sorted array: \n");
  printArray(array, n);
  return 0;
}

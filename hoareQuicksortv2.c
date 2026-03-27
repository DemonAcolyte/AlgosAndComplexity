#include <stdio.h>
#include "src/helpers.h"


void quickSort(int arr[], int low, int high);


int main(){
  
  printf("Initial arr: ");
  printArr(test_arr, test_size);
  printf("\nAfter sorting: ");
  quickSort(test_arr, 0, test_size - 1);
  printArr(test_arr, test_size);
}


void quickSort(int arr[], int low, int high){


  if(low < high){

    int pivot = arr[low];
    int i = low - 1;
    int j = high + 1;

    while(i < j){

      do{
        i++;
      }while(arr[i] < pivot);

      do{
        j--;
      }while(arr[j] > pivot);
      
      if(i < j){
        swap(arr + i, arr + j);
      }
    }
      quickSort(arr, low, j);
      quickSort(arr, j + 1, high);
  }
}

#include <stdio.h>
#include <stdlib.h>
#include "src/helpers.h"

void gnomeSort(int arr[], int size);


int main(){
  
  printf("Before: ");
  printArr(test_arr, test_size);
  gnomeSort(test_arr, test_size);
  printf("After: ");
  printArr(test_arr, test_size);
}



void gnomeSort(int arr[], int size){
  
  int ctr;
  for(ctr = 0; ctr < size - 1;){
    if(arr[ctr] > arr[ctr + 1]){
      swap(&arr[ctr], &arr[ctr+1]);
      if(ctr != 0){
        ctr--;
      }
    }else{
      ctr++;
    }
  }
}



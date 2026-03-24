#include <stdio.h>
#include "src/helpers.h"


void shellSort(int arr[], int size);

int main(){

  printf("Before Sort: ");
  printArr(test_arr, test_size);
  
  printf("\n");
  printf("After Sort: ");
  shellSort(test_arr, test_size);
  printArr(test_arr, test_size);

}



void shellSort(int arr[], int size){
  
  int gap;
  for(gap = size / 2; gap > 0; gap /= 2){
    
    int i;
    for(i = gap; i < size; i++){
      
      int temp = arr[i];
      int j;
      for(j = i; j >= gap && arr[j - gap] > temp; j-=gap){

        arr[j] = arr[j - gap];
      }

      if(j != i){
        arr[j] = temp;
      }
    }
  }
}


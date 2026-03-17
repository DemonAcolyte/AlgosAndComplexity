#include <stdio.h>
#include <stdlib.h>


void printArr(int arr[], int size);
void shellSort(int arr[], int size);

int main(){

  int arr[] = {4, 1, 3, 76, 2, 9};
  int size = 6;

  printf("Before Sort: ");
  printArr(arr, size);
  
  printf("\n");
  printf("After Sort: ");
  shellSort(arr, size);
  printArr(arr, size);

}

void printArr(int arr[], int size){

  for(int i = 0; i < size; i++){

    printf("%d ", arr[i]);
  }
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


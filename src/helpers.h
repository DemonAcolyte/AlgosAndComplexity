#include <stdio.h>
#include <stdlib.h>



int test_arr[] = {3, 1, 5, 2, 9, 8, 7, 0};
int test_size = 8;

void printArr(int arr[], int size){
  

  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

#include <stdio.h>

#define MAX 5
typedef struct{

  int arr[MAX];
  int count;
}Array;


void init(Array *A);
void display(Array *A);
void selectionSort(Array *A);
void print(Array A);
void swap(int *A, int *B);
int main(){
  
  Array A;
  init(&A);
  print(A);
  printf("After sorting:\n");
  selectionSort(&A);
  print(A);

}

void init(Array *A){
  int i;
  int arr[] = {5, 1, 4, 2, 7};
  for(i = 0; i < MAX; i++){
    A->arr[i] = arr[i];
  }

}

void print(Array A){

  int i;
  for(i = 0; i < MAX; i++){
    printf("%d ", A.arr[i]);
  }
}
void selectionSort(Array *A){
  
  int i, j, min;

  for(i = 0; i < MAX; i++){
    min = i;// Set minimum as i
    for(j = i + 1; j < MAX; j++){// traverse the array after the ith index
      if(A->arr[i] > A->arr[j]){// Find elements that are greater than arr[i] and then set it as minimum
        min = j;
      }
    }
    // This code block basically just swaps the elements after finding the minimum
    int temp;
    temp = A->arr[i];
    A->arr[i] = A->arr[min];
    A->arr[min] = temp;
  }
}

void swap(int *A, int *B){
  int temp;
  temp = *A;
  *A = *B;
  *B = temp;
}



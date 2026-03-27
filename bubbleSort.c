#include <stdio.h>

#define MAX 5
typedef struct{
  int arr[MAX];
  int count;
}Array;

void init(Array *A);
void print(Array A);
void bubbleSort(Array *A);

int main(){
  
  Array A;
  init(&A);
  print(A);
  printf("After sorting(bubbleSort):\n");
  bubbleSort(&A);
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

void bubbleSort(Array *A){

  int i, j, temp;
    
  for(i = 0; i < MAX; i++){

    for(j = 0; j < MAX - 1; j++){ // Compare adjacent elements
      if(A->arr[j] > A->arr[j + 1]){ // Basically compare elements if arr[j] > arr[j + 1] then swap
        temp = A->arr[j];
        A->arr[j] = A->arr[j + 1];
        A->arr[j + 1] = temp;
      }
    }
  }
}

#include <stdio.h>

#define MAX 5
typedef struct{
  int arr[MAX];
  int count;
}Array;

void init(Array *A);
void print(Array A);
void insertionSort(Array *A);

int main(){
  
  Array A;
  init(&A);
  print(A);
  printf("After sorting(insertionSort):\n");
  insertionSort(&A);
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

void insertionSort(Array *A){
  int i, j, temp;

  for(i = 1; i < MAX; i++){
   temp = A->arr[i];
    for(j = i - 1; j >= 0 && A->arr[j] > temp; j--){
      A->arr[j + 1] = A->arr[j];
    }
    A->arr[j + 1] = temp;
  }
}

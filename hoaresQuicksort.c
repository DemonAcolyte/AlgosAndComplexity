#include <stdio.h>
#include <stdlib.h>


int partition(int arr[], int low, int high);
void quicksort(int arr[], int low, int high);
void print(int arr[], int count);

int main(){
  int arr[] = {5, 6, 1, 2, 3};
  int count = 5;
  quicksort(arr, 0, count - 1);
  print(arr, count);


}

int partition(int arr[], int low, int high){
  
  int i = low - 1;
  int j = high + 1;
  int mid = (low + high) / 2;
  int pivot = arr[mid];
  while(1){
  do{
    i++;
  }while(arr[i] < pivot);

  do{

    j--;
  }while(arr[j] > pivot);

  if(i >= j){
    return j;
  }

  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
  }
}

void quicksort(int arr[], int low, int high){
  
  if(low < high){
    
    int part = partition(arr, low, high);

    quicksort(arr, low, part);
    quicksort(arr, part + 1, high);
  }

}
void print(int arr[], int count){
  int i;
  for(i = 0; i < count; i++){
    printf("%d ", arr[i]);
  }
}

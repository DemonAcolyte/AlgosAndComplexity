#include <stdio.h>
#include "src/helpers.h"


void combSort(int arr[], int size);
int getNextGap(int gap);

int main(){

  combSort(test_arr, test_size);
  printArr(test_arr, test_size);

}

int getNextGap(int gap){

  gap = (gap * 10) / 13;

  if(gap < 1) return 1;

  return gap;
  
}


void combSort(int arr[], int size){

  int gap = size; // Initialize the gap
  bool swapped = true; // Set swapped as true first
  

  while(gap != 1 || swapped == true){ // Check if gap is not yet equal to one and swapped is still TRUE

    gap = getNextGap(gap); // get the Gap
    
    swapped = false;

    for(int i = 0; i < size-gap; i++){ // size - gap limits the bounds of i so it wont go out of bounds
      if(arr[i] > arr[i + gap]){
        swap(&arr[i], &arr[i + gap]);
        swapped = true;
      }
    }
  }


}



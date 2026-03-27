#include <stdio.h>
#include "src/helpers.h"




void strandSort(int arr[], int size);

int main(){
  strandSort(test_arr, test_size);
  printArr(test_arr, test_size);
}



void strandSort(int arr[], int size){
  
  List arr_list = NULL;
  List output = NULL;
  

  for(int i = size - 1; i >= 0; i--){
    push(&arr_list, arr[i]);
  }

  while(arr_list != NULL){

    List sublist = NULL;

    List *trav = &arr_list;

    while(*trav != NULL){

      if(sublist == NULL || (*trav)->data >= top(sublist)){
        List temp = (*trav)->next;

        (*trav)->next = sublist;
        sublist = *trav;

        *trav = temp;


      }else{
        trav =&(*trav)->next;
      }
    }
  }




}

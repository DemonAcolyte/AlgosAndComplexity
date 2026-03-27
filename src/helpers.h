#include <stdio.h>
#include <stdlib.h>


typedef struct node{

  int data;
  struct node *next;
}*List;


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

void push(List *S, int data){

  List temp = (List)malloc(sizeof(struct node));

  if(temp != NULL){
    temp->data = data;
    temp->next = *S;
    *S = temp;
  }
}

void pop(List *S, int data){

  List temp = *S;
  
  if(temp != NULL){  
    *S = temp->next;
    free(temp);
  }
}

int top(List S){
  return (S == NULL)? -1 : S->data;
}



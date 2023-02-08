#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();
extern void addHeap(int);
extern void printNode(int);
extern void buildMaxHeap();
extern int heapSize();
extern int heapDelete();

int main(int argc, char * argv[]){
   int value,temp;
   while (scanf("%d", &value) != EOF) {
      fprintf(stderr, "READING INPUT: %d\n", value);
      addHeap(value);
   }
   buildMaxHeap();
   printNode(1);
   printf("\nSorted Numbers(descending):\n");
   while(heapSize() > 1){
      temp = heapDelete();
      printf("%d\n",temp);
      push(temp);
   }
   printf("Sorted Numbers(ascending):\n");
   while(isEmpty() != 1){
      printf("%d\n",pop());
   }
   exit(0);
}

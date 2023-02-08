#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

int main (int argc, char * argv[])
{
  int ch;
  int nextch;
  int arr[26] = {0};
  int i;
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
       continue;
    else if(ch=='<'){
      ch = getchar();
      if(isalpha(ch)){
	nextch  = getchar();
           if((nextch  =='>')&& (nextch !=EOF)){
               push(ch);
	       arr[ch-97]++;
           }
           else{
               printf("NOT Valid\n");
               exit(1);
           }
      }
      else if(ch =='/'){
	 ch = getchar();
           if(isalpha(ch)){
              nextch  = getchar();
              if((nextch  =='>') && (nextch !=EOF)){
                 if(pop() == ch ) {
                    continue;
                 }                   
                 else{ 
                     fprintf(stderr, "NOT Valid\n" );
                     exit(1);
                  }
	      }
	   }
	   else {
	     fprintf(stderr, "NOT Valid\n");
	     exit(1);
	   }
      }
    }
  }
  if((isEmpty())== 1){
    printf("Valid\n");
    for (i = 0 ; i <= 25; i++){
      if (arr[i] > 0){
	printf("%c %d\n", (i + 97), arr[i]);
      }}
    exit(0);}
  else{
    printf("NOT Valid\n");
    exit(1);}
  }

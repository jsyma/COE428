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
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
       continue;
    else if(ch=='<'){
      ch = getchar();
      if(isalpha(ch)){
	nextch  = getchar();
           if((nextch  =='>')&& (nextch !=EOF)){
               push(ch);
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
                    fprintf(stderr,"Valid\n");
                    exit(0);
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
    printf("Stack is Empty\n");
    exit(0);}
  else{
    printf("NOT Valid\n");
    exit(1);}
  }

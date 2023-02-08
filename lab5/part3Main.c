#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern char *  pop();
extern void push(char *);

int main(int argc, char * argv[])
{
  int ch;
  int nxt;
  char *str;
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
    else if(ch == '<'){
      fgets(str);
      if(isalpha(str)){
	nxt = getchar();
	if((nxt == '>') && nxt != EOF){
	  push(str);
	  add(str);
	}
	else{
	  printf("NOT Valid\n");
	  exit(1);
	}
      }
      else if(ch == '/'){
	gets(str);
	if(isalpha(str)){
	  nxt = getchar();
	  if((nxt == '>') && nxt != EOF){
	    if((strcmp(pop(), str) == 0){
		continue;
	      }
	      else{
		fprintf(stderr, "NOT Valid\n");
		exit(1);
	      }
	  else{
	    fprintf(stderr, "NOT Valid\n");
	    exit(1);
	  }
	      }}}}
    
    
    

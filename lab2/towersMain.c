#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv)
{
    int n = 3;
    int from = 1;
    int dest = 2;
    if (argc == 1){
    }  
    if (argc == 2) {
      n = atoi(argv[1]);	  
    }
    if (argc == 3){
      fprintf(stderr, "There should be 3 arguments\n");
      exit(1);
    }
    if (argc == 4){
      n = atoi(argv[1]);
      from = atoi(argv[2]);
      dest = atoi(argv[3]);
      if(from <=0 | dest <=0){
	fprintf(stderr, "from/dest has to be >0\n");
	exit(1);
      }
      if(from > 3 | dest > 3){
	fprintf(stderr, "from/dest should be a number <=3\n");
	exit(1);
      }
      if (from == dest){
	fprintf(stderr,"from cannot equal to dest\n");
	exit(1);
      }
    }
    if (argc > 4){
      fprintf(stderr, "There should only be 3 arguments\n");
      exit(1);
    }
    towers(n, from, dest);
    exit(0);
}


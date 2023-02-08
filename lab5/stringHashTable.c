#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int value;
};
Entry hash_table[HASH_TABLE_SIZE];

int hash(char * tag){
  int i;
  int key;
  int len = strlen(tag);
  for(i = 0; i< len ; i++){
    key  = key + *(tag+i);
  }
  return key % HASH_TABLE_SIZE;
}

void add(char * tag)
{
  int key = hash(tag);
  if(hash_table[key].value  == 0){
     hash_table[key].string = tag;
     hash_table[key].value = 1;
  }
  else{
     key++;
     key = key % HASH_TABLE_SIZE ;
     }
  }


Entry get(char * tag){
  int key = hash(tag);
  Entry value;
  if(hash_table[key].string == tag){
    value = hash_table[key];
  }
  else{
    key++;
    key = key % HASH_TABLE_SIZE ;
  }
 return value;
}

#include <stdlib.h>
#include <stdio.h>

typedef enum{
  A,
  B,
  C,
  D,
  E,
  F,
  G,
  H,
}state;

typedef enum{
  cmd_0,
  cmd_1,
} transition;



typedef struct{
  state currState;
  transition event;
  state nextState;
} state_transition;

static state_transition stateTransMatrix[] = {
  {A, cmd_0, D},
  {A, cmd_1, B},
  {B, cmd_0, G},
  {B, cmd_1, E},
  {C, cmd_0, F},
  {C, cmd_1, H},
  {D, cmd_0, A},
  {D, cmd_1, G},
  {E, cmd_0, H},
  {E, cmd_1, A},
  {F, cmd_0, B},
  {F, cmd_1, E},
  {G, cmd_0, G},
  {G, cmd_1, C},
  {H, cmd_0, F},
  {H, cmd_1, D}
};

typedef struct{
  const char * name;
  void(*func)(void);
}stateFunc;

void s_A(){ printf("A");}
void s_B(){ printf("B");}
void s_C(){ printf("C");}
void s_D(){ printf("D");}
void s_E(){ printf("E");}
void s_F(){ printf("F");}
void s_G(){ printf("G");}
void s_H(){ printf("H");}

static stateFunc stateFunction[]={
  {"A", &s_A},
  {"B", &s_B},
  {"C", &s_C},
  {"D", &s_D},
  {"E", &s_E},
  {"F", &s_F},
  {"G", &s_G},
  {"H", &s_H},
};





int main(int argc, char * argv[])
{
  if (argc == 1){
    state curr_state = C;
    state next_state;
    printf("C\n");
  }
 
  while (argc == 2){
    state curr_state;
    int n = atoi(argv[1]);
    switch(curr_state){

    case C:{
      if (n == 0){
	state curr_state = F;
	printf("F");
      }
      if (n == 1){
	state curr_state = H;
	printf("H");
      }
    } break;

    case F:{
      if (n == 0){
	state curr_state = B;
	printf("B");
      }
      if (n == 1){
	state curr_state = E;
	printf("E");
      } 
     }break; 
    
    }
   exit(0);
  }}

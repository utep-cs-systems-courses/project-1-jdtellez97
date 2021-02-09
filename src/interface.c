#include <stdio.h>
#include "tokenizer.h"
#include "tokenizer.c"
int main(){
  char t[50];
  printf(">");
  fgets(t, 50, stdin);
  printf("you entered : %s ", t);
  return 0;
}

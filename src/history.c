#include <stdio.h>
#include <stdlib.h>
#include "history.h"

int c = 1; /*counter for id*/
List* init_history(){
  List* head = (List*)malloc(sizeof(List));
  head->root = NULL;
  return head;

}
void add_history(List *list, char *str){
  Item * target = list->root;
  if(list->root == NULL){
    list->root = (Item*)malloc(sizeof(Item));
    list->root->id = c++;
    list->root->str = str;
    list->root->next = NULL;
  }else{
  while(target->next != NULL){
    target = target->next;
 }
  target->next = (Item *)malloc(sizeof(Item));
  target->next->id = c++;
  target->next->str = str;
  target->next->next = NULL;
}
}


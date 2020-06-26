
#include <stdio.h>
#include <stdlib.h>
#define IN 1 /* inside a word*/
#define OUT 0  /* outside a word*/
int space_char(char c){
  if((c == ' ' || c == '\t') && c != '\0' )
    return 1;
  else return 0;
}
int non_space_char(char c ){
  if((c != ' ' || c != '\t') && c != '\0')
    return 1;
  else return 0;
}
char word_start(char *str){
  if(*str == '\0')
    return *str ='\0';
  else
    return *str;
}

char *word_terminator (char *word){
  int i;
  while(*(word+i) != '\0' ){
    i++;
    if(space_char(*word+i)){
      return (word+i);
      }
      }
}


int count_words(char *str){
  int counter, state ;
   while(*str != 0){
     if( *str ==' '|| *str == '\n' || *str == '\t')
       state = OUT;
     else if(state == OUT){
       state = IN;
       *str++;
     counter++;
   }  
   }
   return counter;
}
   /*   char *copy_str(char *inStr, short len){
     char *c = malloc(sizeof(char)+1);
     word_start(*inStr);
     while(*inStr != word_terminator( ){
       len++;
       }*/
int main (){
  char *t = "larry" ;
 printf(">");
 //  while(scanf("%s",&*t) != EOF){
 //   printf("%s ", t); 
 //  }
 printf("%s", *word_terminator(t));
 
  return 0;
}




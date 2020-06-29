#include <malloc.h> 
#include <stdio.h>
#include "tokenizer.h"
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
char *word_start(char *str){
  if(*str == '\0')
    return str ='\0';
  else
    return str;
}

char *word_terminator (char *word){
  return word+'0';
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
      char *copy_str(char *inStr, short len){


	int i;
     char *c = malloc(sizeof(*inStr)+1);
     for(i = 0;i < len - 1;i++){
       (*c++) = (*inStr++);
       }
       return c;
      }
char** tokenizer(char *str){
  	char *a;
       	char *b;
  int numwords = count_words(str);
  char ** tokens =(char**) malloc((numwords+1) * sizeof(char**));
       		  for (int i = 0;i<numwords;i++){
	       	    tokens[i] = malloc((numwords+1) *sizeof(char*));
		    a = word_start(str);
		    b = word_terminator(a);
		    tokens[i] = copy_str(a, (b-a));
		    str = word_start(b);
  }
			  return tokens;
			  }

void print_tokens(char **tokens){
  int i = 0 ;
  while(*(tokens+i) != 0){
    printf("%s\n", tokens[i]);
    i++;
  }
  
}void free_tokens(char ** tokens){
  int i = 0;
  while(*(tokens+i) != 0){
    free(*(tokens+i));
  }
}

    
int main (){
  char *t = "larry" ;
 printf(">");
 //  while(scanf("%s",&*t) != EOF){
 //   printf("%s ", t); 
 //  }

 
  return 0;
}

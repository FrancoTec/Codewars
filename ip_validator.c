#include <stdbool.h>

#include<string.h>
#include<stdlib.h>
#include<ctype.h>


bool is_valid_ip(const char * addr) {
  int validation = 0;
  
  if(addr == NULL) return 0;
  
  char addr_copy[100];
  strcpy(addr_copy,addr);
  
  
  char separator[] = ".";
  const char *token;
  
  token = strtok(addr_copy,separator);
  
  while(token != NULL){
    
    for(int i = 0; token[i] != '\0'; i++){
      if(strlen(token) > 1 && token[0] == '0') return 0;
      if(!isdigit(token[i])) return 0;
    }
    
    int i = atoi(token);
    if(i >= 0 && i <= 255) validation++;
   
    
    token = strtok(NULL,separator);
  }

  return (validation == 4) ? 1:0;
  
}

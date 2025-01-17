#include <stdbool.h>
#include <string.h>

// input is a null-terminated string

bool isValidWalk(const char *walk) {
    
    if (strlen(walk) != 10) return false;  
  
    int h =0, v =0;
    while(*walk){
      switch(*walk){
          
          case 'n' : v++; break;
          case 's' : v--; break;
          case 'e' : h++; break;
          case 'w' : h--; break;
          
          }
      walk++;
    }
    return h ==0 && v ==0;
}

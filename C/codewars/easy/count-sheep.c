#include <stdio.h>
#include <string.h>
#include <cstdlib>


char* count_sheep(int n) {

  char* result = (char *) calloc(n * 15 + 1, sizeof(char));
  char* buffer = (char *) calloc(20, sizeof(char));
    
    for(int i = 1; i <= n; i++)
    {
        sprintf(buffer, "%i sheep...", i);
        strcat(result, buffer);
    }
    return result;

}
char* count_sheep2(int n) {
  
  char* res = calloc(11*n, sizeof(char));
  
  for(int i=1; i <= n; i++) 
  {
      sprintf(res+strlen(res), "%i sheep...", i);
  }
  return res;
}

int main(){
  char * res = count_sheep(2);
  printf("%s",res);
  return 0;
}
#include <stdio.h>
#include <string.h>
int main(){
    char D[110], S[110];
    int local;
  while(scanf("%s %s", D, S) != EOF){
  
      local = strstr(D, S);
  
      if(local == NULL){
          printf("Nao resistente\n");
      }
      else
        printf("Resistente\n");
    }
    return 0;
}

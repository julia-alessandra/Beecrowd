#include <stdio.h>
#include <string.h>
int main(){
    int N;
    char palavra[20];

    scanf("%d", &N);

    for(int i = 0; i<N; i++){

        scanf("%s", palavra);

        if(i)   
          printf(" ");
      
        if(strlen(palavra) == 3){
            if(palavra[0] == 'U' && palavra[1] == 'R' || palavra[0] == 'O' && palavra[1] == 'B'){
                palavra[2] = 'I';
            }
        }
            printf("%s", palavra);
    }
    printf("\n");
    return 0;
}
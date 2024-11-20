#include <stdio.h>
int main(){
    int feijao[4];

    for(int i=1; i<=4; i++){
        scanf("%d", &feijao[i]);
    
        if(feijao[i]!=0)
            printf("%d\n", i);
    }
    return 0;
}
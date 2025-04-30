#include <stdio.h>

int main() {
   int H, Z, L;
   char meio;
   
   scanf("%i %i %i", &H, &Z, &L);
   

   if(H > Z && H > L){
       if(Z > L) meio = 'Z';
       else meio = 'L';
   }
   else if(Z > H && Z > L){
       if(H > L) meio = 'H';
       else meio = 'L';
   }
   else{
        if(H > Z) meio = 'H';
        else meio = 'Z';
   }
   
   switch(meio){
    case 'H':
        printf("huguinho\n");
        break;
    case 'L':
        printf("luisinho\n");
        break;
    default:
        printf("zezinho\n");
   }
   
   return 0;
}
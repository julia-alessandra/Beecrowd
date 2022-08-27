#include <stdio.h>
int main(){
    int a1, a2, a3,b1, b2, b3;
    scanf("%d\n%d\n%d", &a1, &a2, &a3);

    b1=(a2*2)+(a3*4);
    b2=(a1*2)+(a3*2);
    b3=(a1*4)+(a2*2);
    
    if(b1<=b2 && b1<=b3)
       printf("%d\n", b1);
       
    else if(b2<=b1 && b2<=b3)
       printf("%d\n", b2);
       
    else if(b3<=b1 && b3<=b2)
       printf("%d\n", b3);

    return 0;
}
#include <stdio.h>
int main(){
    int a, b, c, d, e, f;
    scanf("%i %i %i", &a, &b, &c);

    d=a;
    e=b;
    f=c;

    if(a>b && a>c){
        if(b>c)
            printf("%i\n%i\n%i\n", c,b,a);

        else if(c>b)
            printf("%i\n%i\n%i\n", b,c,a);

    }
    else if(b>a && b>c){
        if(a>c)
            printf("%i\n%i\n%i\n", c,a,b);

        else if(c>a)
            printf("%i\n%i\n%i\n", a,c,b);

    }
    else if(c>a && c>b){
        if(a>b)
            printf("%i\n%i\n%i\n", b,a,c);
        else if(b>a)
            printf("%i\n%i\n%i\n", a,b,c);
    }
    printf("\n%i\n%i\n%i\n", d,e,f);

    return 0;
}
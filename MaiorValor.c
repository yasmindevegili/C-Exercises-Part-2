#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    
    if(a>b && a>c){
        printf("%i", a);
        if(b>c){
            printf("%i",b);
            printf("%i",c);
        }
        else{
            printf("%i",c);
            printf("%i",b);
        }
    }
    else if(b>c && b>a){
        printf("%i",b);
        if(a>c){
            printf("%i",a);
            printf("%i",c);
        }
        else{
            printf("%i",c);
            printf("%i",a);
        }
    }
    else{
        printf("%i",c);
        if(b>a){
            printf("%i",b);
            printf("%i",a);
        }
        else{
            printf("%i",a);
            printf("%i",b);
        }
       
    }
    return 0;
}

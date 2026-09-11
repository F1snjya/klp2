#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long a,b,c;
    scanf("%lld %lld %lld", &a, &b, &c); 
    if(a+b==c){
        printf("+");
    } else if(a-b==c){
        printf("-");
    } else if(a*b==c){
        printf("*");
    }
    return 0;
}
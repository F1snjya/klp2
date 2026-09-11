#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
long long i, jawaban;

if (scanf("%d", &n) == 1){
    for (i = 1; i <= n; i++){
    jawaban = (( i * i * (i - 1) * (i - 1) ))/2;
    printf("%lld\n", jawaban);
    }
    }
    return 0;
}
#include <stdlib.h>
#include <stdio.h>

#define N 37
#define E 100000000
#define M 53

unsigned int modexp(unsigned int n, unsigned int e, unsigned int m) {
    unsigned int result = 1;
    for (int i=0; i<64; i++) {
        if((e % 2) == 1) {
            result = (result * n) % m;
        }
        e = e >> 1;
        if(e == 0) {
            return result;
        }
        n = (n * n) % m;
    }
    return result;
}

int main() {
    printf("%d^%d mod %d = %d\n", N, E, M, modexp(N,E,M));
}
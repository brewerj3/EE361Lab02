#include <stdlib.h>
#include <stdio.h>

int reverse_int(int n) {
    int remainder = 0, reverse = 0;
    while(n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n/10;
    }
    n = reverse;
    return n;
}

int main()
{
    int m = 456;
    printf("n = %d, reverse = %d\n", m, reverse_int(m));
    m = -456;
    printf("n = %d, reverse = %d\n", m, reverse_int(m));
    m = 3400;
    printf("n = %d, reverse = %d\n", m, reverse_int(m));


}
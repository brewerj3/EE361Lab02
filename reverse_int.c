#include <stdlib.h>
#include <stdio.h>

int reverse_int(int n)
{
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
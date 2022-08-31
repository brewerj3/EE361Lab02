#include <stdlib.h>
#include <stdio.h>

#define MULTX 3
#define MULTY 500000000
#define POW2  256
#define NOTPOW2 250

/*
 *  Rewrite this function so it only uses shifting and addition
 *  operations, and especially no multiply operators.  Use the
 *  algorithm on slide 4 of the Lecture 3-1 slides
 */
unsigned int multiply(unsigned int x, unsigned int y)
{
    unsigned int product = 0;

    for (int i=0; i<y; i++) {
        product += x;
    }
    return product;
}

/*
 * Rewrite this function so it returns 1 if n is a power of 2,
 * and returns 0, otherwise.  Do not use any loops..  Just use
 * logic, addition, and subtraction operations.  It can be done
 * in a few lines.
 */
unsigned int isPowerTwo(unsigned int n)
{
    return 0;
}

int main()
{
    printf("Multiplying %d x %d = %d\n",MULTX,MULTY,multiply(MULTX,MULTY));
    printf("Result of is %d a power 2: %d\n",POW2,isPowerTwo(POW2));
    printf("Result of is %d a power 2: %d\n",NOTPOW2,isPowerTwo(NOTPOW2));
}
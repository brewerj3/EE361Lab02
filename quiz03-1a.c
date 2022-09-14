#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define MAXLOOP 3
#define DELAYLOOP 500000000

void delay(int k)
{
    double x;

    for (int i=0; i<k; i++) {
        x = 2/3;
    }
}

void main()
{
    for (int i=0; i<MAXLOOP; i++) {
        delay(DELAYLOOP);
        sleep(1);
    }
}




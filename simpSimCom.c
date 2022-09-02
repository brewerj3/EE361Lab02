#include <stdlib.h>
#include <stdio.h>

int circ_nand(int in0, int in1)
{
    if (in0 == 0 || in1 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

/* Correct this function */
int circ_nor(int in0, int in1)
{
    return 1;
}

/* Correct this function */
int circ_not(int in0)
{
    return 1;
}

int circ_xor(int in0, int in1)
{
    int not_in0 = circ_not(in0);
    int not_in1 = circ_not(in1);

    int w0 = circ_nand(not_in0, in1);
    int w1 = circ_nand(in0, not_in1);

    int y = circ_nand(w0, w1);
    return y;
}

void main()
{

    int y;
    int x0, x1;

    printf("Simulation for Nand:\n");
    for (int time=0; time<4; time++) {
        x0 = time&1;
        x1 = (time>>1)&1;
        y = circ_nand(x0, x1);
        printf("time=%d: x1=%d, x0=%d, y=%d\n",time,x1,x0,y);
    }

    printf("\n");
    printf("Simulation for Nor:\n");
    for (int time=0; time<4; time++) {
        x0 = time&1;
        x1 = (time>>1)&1;
        y = circ_nor(x0, x1);
        printf("time=%d: x1=%d, x0=%d, y=%d\n",time,x1,x0,y);
    }
    printf("\n");
    printf("Simulation for Xor:\n");
    for (int time=0; time<4; time++) {
        x0 = time&1;
        x1 = (time>>1)&1;
        y = circ_xor(x0, x1);
        printf("time=%d: x1=%d, x0=%d, y=%d\n",time,x1,x0,y);
    }


}




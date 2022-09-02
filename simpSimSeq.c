#include <stdlib.h>
#include <stdio.h>


int machine_next_state(int clock, int prevclock, int state, int reset) {
    if (reset == 1) return 0;
    switch(state) {
        case 0: return 3;
        case 1: return 0;
        case 2: return 1;
        case 3: return 2;
    }
}


void main()
{
    int clock = 0;
    int prevclock;
    int machine_state = 3;
    int reset = 0;

    for (int time=0; time<24; time++) {
        prevclock = clock;
        if (time%2 == 1) {
            if (clock == 0) {
                clock = 1;
            }
            else {
                clock = 0;
            }
        }
        if (time <= 4) {
            reset = 1;
        }
        else {
            reset = 0;
        }
        if (prevclock == 0 && clock== 1) {
            machine_state = machine_next_state(clock, prevclock, machine_state, reset);
        }
        printf("time=%2d: clock=%d, state=%d, reset=%d\n",time,clock,machine_state,reset);
    }
}

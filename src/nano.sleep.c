/* A delay example with nano sleep */
#include <time.h>    //nanosleep
#include <stdlib.h>  //atol

void delaySec(unsigned int delay){
	struct timespec tim, tim2;
	tim.tv_sec = delay;
	tim.tv_nsec = 0;
	nanosleep(&tim, &tim2);

}

void delayNano(unsigned long delay){
	struct timespec tim, tim2;
	tim.tv_sec = 0;
	tim.tv_nsec = delay;
	nanosleep(&tim, &tim2);
}

int main(int argc, char *argv[]){
	if(argv[1] == NULL) return 1;
	delaySec((unsigned) atoi(argv[1]));
	if(argv[2] != NULL) delayNano((unsigned) atol(argv[2]));
	return 0;
}


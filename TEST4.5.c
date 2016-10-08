#include <stdio.h>
#define CHANGE 8

int main(){
	
	double speed = 18.12;  // Mb/s
	double bytes = 2.20;//  MB
	double time;
	double bits;
	
	bits = bytes * CHANGE;
	time = bits / speed;
	
	printf("At %.2f megabits per second , a file of %.2f megabytes \n",speed,bytes);
	printf("downloads in %.2f seconds.",time);
	
	return 0;

}

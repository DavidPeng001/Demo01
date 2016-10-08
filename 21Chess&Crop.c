#include<stdio.h>
#define SQUARES 64
int main(){
	
	const double CROP = 2E16;
	double current,total;
	int conut =1;
	
	printf("square   grains       total        fraction of \n");
	printf("         added        grains       world totals \n");
	
	total = current = 1.0;
	
	do{
		printf("%4d %13.2e %12.2e %12.2e \n",conut,current,total,total/CROP);
		
		conut ++;
		current = 2.0*current;
		total =total+current;		
	}while (conut<=64);
	
	return 0;
	
	
} 

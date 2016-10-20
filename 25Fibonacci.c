#include<stdio.h>

int main(){
	long long x,y,z;
	int num,i;
	scanf("%d",&num);
	
	x=y=1;
	for(i=1;i<=num-2;i++){
		z = x+y;
		x = y;
		y = z;
			printf("The %dth of the Fibonacci sequence is %lld \n",i+2,y);
	}

	
	return 0;
}

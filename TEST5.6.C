#include <stdio.h>
int main(){
	int n,max,sum;
	scanf("%d",&max);
	n = 0;
	sum = 0;
	while(++n<= max)
		sum = sum+n*n;
	printf("the sum is %d",sum);

	return 0;
}

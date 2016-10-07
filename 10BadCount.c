#include <stdio.h>
int main(){
	
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;
	
	/*the below lines are not good*/
	printf("%d \n",n,m);
	printf("%d %d %d\n",n);
	printf("%d %d\n",f,g);
	
	return 0;
}

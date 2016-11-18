#include<stdio.h>
long fact(int);
long rfact(int);
int main (){
	int num;

	printf("Please enter a value in the range 0-12 to calculate its factorials (q to quit):\n");
	while(scanf("%d",&num) == 1){
		if(num < 0)
			printf("No negative numbers.\n");
		else if (num > 12)
			printf("Keep input unber 13.\n");
		else {
			printf("loop: \n%d factorial = %ld\n",num,fact(num));
			printf("recursion: \n%d factorial = %ld\n",num,rfact(num));
			
		}
		printf("Please enter a value in the range 0-12 to calculate its factorials (q to quit):\n");
	}
	printf("Done!");
	return 0;
}
//use loop
long fact(int n){
	long ans;
	for(ans = 1;n > 1;n--)
		ans = n * ans;
	return ans; 
}
//use recursion
long rfact(int n){
	long ans;
	if(n>0)
		ans = n * rfact(n-1);
	else 
		ans=1;
	return ans;
}

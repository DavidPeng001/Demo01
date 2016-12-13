#include<stdio.h>
int Fibonacci(int);
int main(){
	int n;
	int s;
//	while(1){
		scanf("%d",&n);
		s = Fibonacci(n + 1);
		printf("%d\n",s);		
//	}
	return 0;	
} 

int Fibonacci(int num) {
	int x,y,z;
	int i;
	
	if(num == 2 )
		return 1;
	x = y = 1;
	for(i=1;i<=num-2;i++){
		z = x+y;
		x = y;
		y = z;
			
	}
	return y;
}

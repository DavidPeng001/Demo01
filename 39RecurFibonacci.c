// Attantian:this program will use your lots of CPU and ROM,and the calculation will last some time.
#include<stdio.h>
long long Fibonacci(int);
int main() {
	int n;
	long long sum;
	printf("Enter an integer to calculate which item sf Fibonacci:");
	scanf_s("%d", &n);
	sum = Fibonacci(n);
	printf("The %dth of the Fibonacci sequence is %lld \n", n, sum);
	system("pause");
	return 0;
}

long long Fibonacci(int max) {
	long long sum;
	if (max == 1 || max == 2)
		return 1;
	else 
		sum = Fibonacci(max - 1) + Fibonacci(max - 2);
	return sum;
}
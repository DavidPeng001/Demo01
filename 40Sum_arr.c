#include<stdio.h>
#define SIZE 10
int sump(int * start,int * end);
int main(){
	int num[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int sum;
	sum = sump(num,num + SIZE);
	printf("The total number of the array is %d",sum);
	return 0;
} 

int sump(int * start,int * end){
	int total;
	while (start < end){
		total  += *start;
		start++;
	}
	
	return total;
}

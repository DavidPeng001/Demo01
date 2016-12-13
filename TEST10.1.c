#include<stdio.h>
int main(){
	int *ptr;
	int torf[2][2] = {12,14,16};
	ptr = torf[0];
	printf("*ptr = %d \n",*ptr);
	printf("*(ptr + 2) = %d",*(ptr +2));
	return 0;
	
}

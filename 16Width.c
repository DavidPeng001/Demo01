#include<stdio.h>
#define PAGES 123

int main(){
	
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n" ,PAGES);
	
	return 0;
}

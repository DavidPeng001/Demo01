#include<stdio.h>
#define FORMAT 7
int main(){
	int week,day,input;
	scanf("%d",&input);
	week = input/FORMAT;
	day = input%FORMAT;
	printf("%d days are %d weeks and %d day",input,week,day);
	getchar();
	return 0;
}
#include<stdio.h>

int main() 
{
	int num;
	int a,b,c;
	
	scanf("%d",&num);
	a=num/100;
	c=num%10;
	b=(num%100)/10;
	
	printf("%d",c*100+b*10+a) ;
	
	return 0 ;
}

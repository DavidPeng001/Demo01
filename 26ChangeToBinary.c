#include<stdio.h>
#include<math.h>
int main() 
{
	long int a,b,c;
	int n,m,index;
	unsigned long int byte [8];

	//a is begining number
	//b is goal number
	//c is quotient
	//m is used to record the last unit
	
	//let every unit of the array = 00000000 
	for(index=0;index <= 7;index++)
	{
		byte[index] = 0;
	}
	
	//input
	scanf_s("%ld",&a);
	
	n = 0;
	b = a%2;
	c = a/2;
	index = 0; 
	 
	//loop to produce a byte of binary number 
	//when the number is big enough ,output into the array and calculate the next one
	while(c>=1) 
	{
		n++;
		b += pow(10,n)*(c%2);
		c /= 2;
		
		if(n%8 == 7) 
		{
			byte[index] = b;
			index++;
			b = c%2;
			c /= 2;
			n = 0;
		}
	}
	m = index;
	byte[m] = b;
	
	
	//output
	printf("0b");
	for(index = 7; index >= 0; index--) 
	{
		if(index<7)
			putchar('_');
		printf("%08lu",byte[index]);

	}

	return 0;
}


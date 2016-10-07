#include <stdio.h>

int main (){
	
	unsigned width, precision;
	int number1 = 256;
	double number2 = 242.5;
	
	// TIP:the number behind the dot is the min width
	// TIP:the number after the dot is the precision of a float number 
	
	printf("Enter a field width :\n");
	scanf("%d",&width);
	printf("The number is :%*d \n\n",width,number1);
	
	printf("Enter a width and precision : \n");
	scanf("%d %d",&width,&precision);
	printf("The number is : %*.*f \n",width,precision,number2);
	
	return 0;
	
}


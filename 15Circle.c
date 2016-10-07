#include<stdio.h>
#define PI 3.14

int main(){
	
	float radius,circum,area;
	
	printf("please input the radius of the cricle\n");
	scanf("%f",&radius);
	
	area = PI*radius*radius;
	circum = PI*radius*2.0;
	
	printf("The area is %1.2f \n",area);
	printf("The circum is %1.2f \n ",circum);
	
	return 0;
}

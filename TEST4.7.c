#include<stdio.h>
#include<float.h>

int main(){
	
	double n = 1.0/3.0;
	float m = 1.0/3.0;
	
	printf("%.6f %.12f %.16f %.20f \n",n,n,n,n);
	printf("%.6f %.12f %.16f %.20f \n",m,m,m,m);
	
	printf("DBL_DIG = %d \n",DBL_DIG);
	printf("FTL_DIG = %d \n",FLT_DIG);
	//DIG means the least valuable number 
	
	return 0;
}

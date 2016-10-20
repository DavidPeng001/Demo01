#include<stdio.h>
int main(){
	void Temp(float);
	float f,re;
	re = scanf("%f",&f);
	while(re==1){
		Temp(f);
		re = scanf("%f",&f);
	}
	return 0;
}
void Temp(float F){
	const float C = 5.0/9.0*(F-32.0);
	const float K = C+273.16;
	printf("%.2fF\n%.2fC\n%.2fK\n",F,C,K);
	getchar();
}
#include<stdio.h>

int main(){
	
	const double NUM = 3852.99;
	
	printf("*%f*\n",NUM);  //Ĭ��6λС�� 
	printf("*%e*\n",NUM);  //Ĭ��С����ǰֻһλ 
	printf("*%4.2f*\n",NUM);  //ָ��λ�� ��С������2λ 
	printf("*%3.1f*\n",NUM);  //С������1λ 
	printf("*%10.3f*\n",NUM);  //С������3λ 
	printf("*%10.3E*\n",NUM);  //e������ 
	printf("*%+4.2f*\n",NUM);  // + 
	printf("*%010.2f*\n",NUM);  // ��0�����ֶ� 
	
	return 0;
}

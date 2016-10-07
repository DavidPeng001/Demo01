#include<stdio.h>

int main(){
	
	const double NUM = 3852.99;
	
	printf("*%f*\n",NUM);  //默认6位小数 
	printf("*%e*\n",NUM);  //默认小数点前只一位 
	printf("*%4.2f*\n",NUM);  //指定位数 ：小数部分2位 
	printf("*%3.1f*\n",NUM);  //小数部分1位 
	printf("*%10.3f*\n",NUM);  //小数部分3位 
	printf("*%10.3E*\n",NUM);  //e计数法 
	printf("*%+4.2f*\n",NUM);  // + 
	printf("*%010.2f*\n",NUM);  // 用0填满字段 
	
	return 0;
}

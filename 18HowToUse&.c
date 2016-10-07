#include<stdio.h>

int main(){
	
	int age;
	float height;
	char name[40];
	
	printf("please input your age height and name\n");
	scanf("%d %f",&age,&height);  //Use &
	scanf("%s",name);  //DO NOT use &
	printf("%d %.2f %s\n",age,height,name);
	
	return 0;
} 


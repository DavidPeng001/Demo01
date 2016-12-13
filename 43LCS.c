#include<stdio.h>
#include<string.h>
int main(){
	char ch;
	int i,n;
	char str1[40],str2[40];
	int length,max = 0;
	
	gets(str1);
	gets(str2);
	
	for(n = 0;n < strlen(str1);n++)
		for(i = 0;i <strlen(str2);i++,(length > max) ? max = length:max )
			for(length = 0;str1[n+length] == str2[i+length];length++) {}
			
	printf("%d",max);
	return 0;
}

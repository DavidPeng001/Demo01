#include<stdio.h>
#include<string.h>
int main(){
	char words [40];
	int length,n;
	
	scanf("%s",words);
	length = strlen(words);
	
	for(n=length-1;n>=0;n--)
		putchar(words[n]);
	putchar('\n');
	
	return 0;
		
}

#include <stdio.h>
#include <string.h>

int main(){
	
	char fname [40];
	char lname [40];
	
	printf("Please input your name: \n");
	scanf("%s %s",fname,lname);
	printf("%s %s \n",fname,lname);
	printf("%*d %*d",strlen(fname),strlen(fname),strlen(lname),strlen(lname));
	
	return 0;
}

#include<stdio.h>
#include<string.h>
#define PRAISE "You are the best."

int main(void){
	
	char name [40];
	printf ("What\'s your name?\n");
	scanf("%s",name);
	printf("Hello,%s,%s\n\n",name,PRAISE);
	printf("Your name of %u letters occupies %u memory cells.\n",strlen(name),sizeof name);
	printf("The praise of praise has %u letters ",strlen(PRAISE));
	printf("and occupies %u memory cells. \n",sizeof PRAISE);
	
	return 0;
}

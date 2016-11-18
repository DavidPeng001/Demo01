#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(){
	bool isChar[30];
	int position[30] = {0};
	int n,max;
	char ch;
	for(n = 0;(ch = getchar()) != '\n'; n++){
		isChar[n] = false;
		isChar[n] = isalpha(ch);
		if(isalpha(ch)){
			ch = tolower(ch);
			position[n] = ch - 96;
		}
		
	}
	max = n-1;
	printf("isCharacter? ");
	for(n = 0;n <= max;n++ ){	
		if(isChar[n])
			putchar('T');
		else
			putchar('F');
		putchar(' ');
		putchar(' ');
		putchar(' ');
	}
	putchar('\n');
	printf("position: ");
		for(n = 0;n <= max;n++ ){
			if(isChar[n])
				printf("%4d",position[n]);
			else{
				putchar(' ');
				putchar(' ');
				putchar(' ');
				putchar(' ');
			}
			
		}
	
	putchar('\n');
	
	return 0;
}


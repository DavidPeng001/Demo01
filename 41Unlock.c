#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
//  sample :a4s5c12  -->  aaaaasssssscccc
int main() {
	char ch,repeat;
	int n = 0,i = 0;
	while((ch = getchar()) != '\n') {
		if(isalpha(ch) ) {
			for(i = 0; i <= n && n!= 0 ; i++)
				putchar(repeat);
			repeat = ch;
			n = 0;
		} else {
			n += (ch - 48);
		}
	}
	for(i = 0; i <= n; i++)
		putchar(repeat);
	return 0;
}

#include<stdio.h>
int main(){
	int height,line,space,ch;
	scanf("%d",&height);
	
	for(line = 1;line <= height;line++,putchar('\n')){
	
		
		//output spaces
		for(space = height-line;space>=0;space--)
			putchar(' ');
		//output charcter
		for(ch = line*2-1;ch>=1;ch--)
			putchar('$');
		
	}
	
	for(line = height-1;line >= 1;line--,putchar('\n')){
		
		
		//output spaces
		for(space = height-line;space>=0;space--)
			putchar(' ');
		//output charcter
		for(ch = line*2-1;ch>=1;ch--)
			putchar('$');
		
	}
	return 0;
}

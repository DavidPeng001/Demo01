#include<stdio.h>
int main(){
	int height,line,n,space,ch;
	scanf("%d",&height);
	for(line=1,n=1 ;(n<=height)?line<=height:line>=1 ;(n<height)?line++:line--,n++,putchar('\n')){
		
		//output spaces
		for(space = height-line;space>=1;space--)
			putchar(' ');
		//output charcter
		for(ch = line*2-1;ch>=1;ch--)
			putchar('*');
	}
	
	return 0;
}

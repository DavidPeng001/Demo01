#include <stdio.h>

void mark(int n);  //ANSI C
int main() {
	
	int num = 5;
	char ch = '!';
	float f =6.0f;
	
	mark(num);
	mark(ch);
	mark(f);
	
	return 0;
	
}

void mark(int n){
	
	while(n-- >0){
		printf("#");
	}
	
	printf("\n");
}

 #include<stdio.h>
int main() {
	void output(char);
	char ch = getchar();
	
	if(ch>='A' && ch<='Z')
		output(ch);
	else
		printf("your input is not good");
	
	return 0;	
	
}

void output(char ch){
	int height,max,space;
	char ch1,ch2;
	
	max = ch-'A';
	for(height=0;height<=max;height++){
		
		//output the space    what the fuck
		for(space=1;space<=max-height;space++){
			putchar(' ');	
		}
		
		//output the characters
		for(ch1 ='A';ch1<='A'+height;ch1++){
			putchar(ch1);
		}
		for(ch2 = 'A'+height-1;ch2>='A';ch2--){
			putchar(ch2);
		}
		
	putchar('\n');
	}
	
	
}

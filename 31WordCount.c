#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main() {
	char ch,prev;
	long n_chars=0L; //number of character
	int n_lines=0,n_words=0;
	int p_lines=0; //partial lines
	bool inword = false; //if ch is in the word ,inword = true

	printf("Enter text to be anaylsed( | to end): \n");
	prev = '\n';

	while((ch=getchar())!= STOP) {
		n_chars++;
		
		if(ch == '\n')
			n_lines++;
		if(!isspace(ch) && !inword) {   //cool!
			inword = true;
			n_words++;
		}
		if(isspace(ch) && inword)
			inword = false;			
		prev = ch;
	}
	
	if(prev == '\n')
		p_lines =1;
	
	printf("character = %ld \nwords = %d \nlines = %d \npartial lines =%d  \n",n_chars,n_words,n_lines,p_lines);
	
	return 0;
}

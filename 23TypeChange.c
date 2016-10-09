#include<stdio.h>

int main(){
	
	char ch;
	int i;
	float fl;
	
	fl = i = ch = 'C';  //'C' is 67
	printf("char = %c,int = %d,float = %2.2f \n",ch,i,fl);
	
	ch = ch+1;
	i =fl+2+ch;
	fl = 2.0*ch+i;
	printf("char = %c,int = %d,float = %2.2f \n",ch,i,fl);
	
	ch = 1107;
	printf("Now ch = %c\n",ch);
	ch = 80.83;
	printf("Now ch = %c\n",ch);
	
	return 0;
	
}

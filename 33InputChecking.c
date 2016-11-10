#include<stdio.h>
#include<stdbool.h>
long get_long();
bool bad_limits(long begin,long end,long low,long high);
double sum_squares(long a,long b);

int main(){
	const long MIN = -10000000L;
	const long MAX = 10000000L;
	long start,stop;
	double answer;
	
	printf("This programd computes the sum of the squares of integers in a range \n");
	printf("Enter the limits(input 0 for both limits to quit): \n");
	printf("Lower:");
	start = get_long();
	printf("Upper:");
	stop = get_long();
	
	while(start != 0 ||stop != 0){
		if(bad_limits(start,stop,MIN,MAX))
			printf("Please try again.\n");
		else {
			answer = sum_squares(start,stop);
			printf("The sum of the squares of integers is from %ld to %ld is    %g\n",start,stop,answer);
			
		}
		printf("Enter the limits(input 0 for both limits to quit): \n");
		printf("Lower:");
		start = get_long();
		printf("Upper:");
		stop = get_long();
	
	}
	printf("Dene! \n");
	
	return 0;
} 


long get_long(){
	long input;
	char ch;
	
	while(scanf("%ld",&input) != 1){
		while((ch = getchar()) != '\n')
			putchar(ch);
	printf("is not an integer.\nPlease input an integer:\n");
	}
	
	return input;
}

double sum_squares(long a,long b){
	double total = 0;
	long i;
	
	for(i = a;i <= b;i++)
		total += (double)i*(double)i;
	
	return total;
	
}

bool bad_limits(long begin,long end,long low,long high){
	bool not_good = false;
	
	if(begin >end){
		printf("%lu isn't smaller than %lu\n",begin,end);
		not_good = true;
	}
	if(begin < low || end < low){
		printf("The number you input is too small\n");
		not_good = true;
	}
	if(begin > high || end > high){
		printf("The number you input is too large\n");
		not_good = true;
	}
	
	return not_good;
}

























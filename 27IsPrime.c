#include<stdio.h>
#include<stdbool.h>
int main (){
	unsigned long num,div;
	bool isPrime;
	
	printf("Please input the number for analysis,Enter q to quit\n");
	while (scanf_s("%lu",&num)==1){
		
		for(div=2,isPrime = true;div*div <= num;div++){
			
			if(num%div==0){
				if(div*div!=num)
					printf("%lu is divisible by %lu and %lu.\n",num,div,num/div);
				else
					printf("%lu is divisible by %lu\n",num,div);	
				
				isPrime = false;
			}
			
		}
		if(isPrime)
		printf("%lu is prime \n",num);
		
		printf("Please input another number for analysis,Enter q to quit\n");
	}
	
	printf("Bye!");
	return 0;
	
}

#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num); 
	
	switch(num){
		case 1:
		printf ("one");
		break;
		case 2:
		printf ("two");
		break;
		case 3:
		printf ("three");
		break;
		default:
		printf ("others");
	}
	
	return 0; 
}
 

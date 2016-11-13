#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<math.h>
int main() {
	int system(const char *string);
	int bubble[15] = { 0 };
	int temp[5] = { 0 };
	int index =0, n,temp_index=0;
	int a, j,sum ;
	char ch;
	bool innumber = false;
	printf("Enter some number:\n");
	while ((ch = getchar()) != '\n') {
		if (!isspace(ch) && !innumber) {
			innumber = true;
		}
		//in the space after a number ,calculate the temp[] and give the number to the bubble[]
		if (isspace(ch) && innumber) {
			innumber = false;
			n = temp_index-1;
			for (temp_index = 0; temp_index <= n; temp_index++) 
				bubble[index] += temp[temp_index] * pow(10, (n - temp_index));
			index++;
			//restart the temp
			for (temp_index = 0; temp_index <= 4; temp_index ++) 
				temp[temp_index] = 0;
			temp_index = 0;
		}
		if (innumber) {
			if (temp_index > 4) {
				printf("Please enter a smaller number.\n");
				break;    //? build a bool to tell the main progarm there is a bad input
			}
			temp[temp_index] = ch - 48;
			temp_index++;
		}
	}
	//last one is influenced by '\n', so add it again
	n = temp_index - 1;
	for (temp_index = 0; temp_index <= n; temp_index++)
		bubble[index] += temp[temp_index] * pow(10, (n - temp_index));
		
	sum = index + 1;
	for (j = 0; j <= sum - 1; j++) {
		for (index = sum; index >= 0; index--) {
			if (bubble[index]<bubble[index + 1]) {
				a = bubble[index];
				bubble[index] = bubble[index + 1];
				bubble[index + 1] = a;
			}
		}
	}
	
	printf("From large to small:\n");
	for(index = 0;index < sum;index++)
		printf("%d ",bubble[index]);

	
	return 0;
}

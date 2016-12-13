#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool issame(char *str1,char *str2);
int biggest_index (int *str);
int main(){
	int n,s,t,max;
	char color[1000][15] = {0};  // what the fuck!  why????
	int times[1000] = {0};
	bool same = false;
	
	scanf_s("%d",&s);
	for(n=0;n<s;n++){
		same = false;
		scanf_s("%s",color[n],15);
		for(t=n-1;t>=0;t--){		
			same = issame(color[t],color[n]);
			if(same) 
				break;
		}
		if(same)
			times[n] = times[t] + 1;
		else
			times[n] = 1;	
	}
	max = biggest_index(times);
	putchar('\n');
	printf("%s",color[max]);
	return 0;
}
 
bool issame(char *str1,char *str2){
	int n;
	if(strlen(str1) != strlen(str2))
		return false;
	for(n=0;n<strlen(str1);n++)
		if(str1[n] != str2[n])
				return false;
	return true;
	
} 

int biggest_index (int *num){
	int i;
	int max = 0;
	for(i=0;i<1000;i++){
		max = (num[max]<num[i])?i:max;
	} 
	return max;
	
}






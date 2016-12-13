#include<stdio.h>
#include<stdbool.h>
bool isleap(int year);
int main(){
	int i,t;
	int y,m,d;
	long sec=0,days=0;
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&t);
	while(t--){
		days=0;
		scanf("%d-%d-%d",&y,&m,&d);
		scanf("%ld",&sec);
		days = sec/86400;
		for(i=0;i<days;i++){
			d++;
			if(isleap(y))
				month[1] = 29;
			else
				month[1] = 28;	
				
			if(d>month[m-1]){
				d = 1;
				m++;
			}
			if(m>12){
				m = 1;
				y++;
			}			
				
		}
		printf("%04d-%02d-%02d\n",y,m,d);
	}
	return 0;
}
bool isleap(int year){
	if(year%4==0 && year%100!=0)
		return true;
	if(year%400==0)
		return true;
	return false;
}



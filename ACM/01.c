#include<stdio.h>
int main(){
	int t,i,m,num;
    float p,result;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&m);
		p = 0;
		for(i=0;i<m;i++){
			scanf("%d",&num);
			if(num == 1)
				p++;
		}
		result = p/m;
		printf("%.2f\n",result);
	}
	return 0;
}

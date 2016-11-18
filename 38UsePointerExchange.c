#include<stdio.h>
void interchange (int *u,int *v);
int main(){
	int x,y;
	printf("Please enter two integers:\n");
	scanf("%d %d",&x,&y);
	printf("Before the exchange:\nx = %d y = %d \n",x,y);
	interchange(&x,&y);
	printf("After the exchange:\nx = %d y = %d",x,y);
	return 0;	
}
void interchange (int *u,int *v){  //u and v are pointers,they represent two positions.
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
	return;
}


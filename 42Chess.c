#include<stdio.h>
int main() {
	int zb[20][20];
	int m,n,x0,y0;  //m，n为强盗坐标；x0，y0为B点坐标
	int z,b;
	scanf("%d %d %d %d",&x0,&y0,&m,&n);  //先后输入B点和强盗坐标
	
	for(b=0; b<=y0; b++) 
		for(z=0; z<=x0; z++)
			zb[z][b] = 1;
			
	zb[m+1][n+2] = 0; 
	zb[m+2][n+1] = 0; 
	zb[m+1][n-2] = 0; 
	zb[m+2][n-1] = 0; 
	zb[m-1][n+2] = 0; 
	zb[m-2][n+1] = 0; 
	zb[m-1][n-2] = 0; 
	zb[m-2][n-1] = 0; 
	zb[m][n] = 0;  
	
	for(z=1; z<=x0; z++) 
		if(zb[z-1][0] == 0)
			zb[z][0] = 0;
	
	for(b=1; b<=y0; b++) 
		if(zb[0][b-1] == 0)
			zb[0][b] = 0;
	
	
	
	for(b=1; b<=y0; b++) 
		for(z=1; z<=x0; z++) 
			if(zb[z][b] != 0)
				zb[z][b]=zb[z-1][b]+zb[z][b-1];
		
	
	for(b=0; b<=y0; b++,putchar('\n')) 
			for(z=0; z<=x0; z++) 
				printf("%5d",zb[z][b]);
				
	printf("%d",zb[x0][y0]);
	return 0;
}

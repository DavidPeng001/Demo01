#include<stdio.h>
#include<stdbool.h>	
#include<stdlib.h>
//man: o    AI : x
//man: 1    AI :2   none: 0
int x2 = 10000;
int o2 = 1000;
int x1, o1, clear=4;
int system(const char *string);
void nextAI(int **map,int *max_c,int *max_r);
void var(bool isfirst);
void printtable(int **map);
int iswin(int **map);
int main() {
	int map[3][3] = { 0 };
	int answer;
	int x=0, y=0;
	bool isfirst;
	bool over = false;
	printf("Who First?\n1: Player  2: AI \n");
	scanf_s("%d", &answer);
	if (answer == 1)
		isfirst = false;
	else if (answer == 2)
		isfirst = true;
	else {
		printf("Input Error!");
		system("pause");
		return 0;
		//Todo :use Loop so player can input many times till he input a right number
	}
	system("cls");
	printf("How to PLAY:\nInput the number then press Enter\n\n");
	printf("７┃８┃９\n━╋━╋━\n４┃５┃６\n━╋━╋━\n１┃２┃３\n\n");
	system("pause");
	system("cls");
	int ** p = NULL;
	p = (int **)malloc(sizeof(int *) * 3);
	for (int i = 0; i < 3; i++) 
			p[i] = map[i];
	//Att:every time map changed, this should run
	if (isfirst) {
		nextAI(p, &x, &y);
		map[x][y] = 2;
	}
	printtable(p);
	int inputnum;
	int result = 0;
	while (result == 0) {
		printf("\n\n    It is your turn!\n\n    Goto:");
		scanf_s("%d",&inputnum);
		//input
		if (inputnum == 7)
			if (map[0][0] == 0)
				map[0][0] = 1;
			else
				continue;
		else if (inputnum == 8)
			if (map[0][1] == 0)
				map[0][1] = 1;
			else
				continue;
		else if (inputnum == 9)
			if (map[0][2] == 0)
				map[0][2] = 1;
			else
				continue;
		else if (inputnum == 4)
			if (map[1][0] == 0)
				map[1][0] = 1;
			else
				continue;
		else if (inputnum == 5)
			if (map[1][1] == 0)
				map[1][1] = 1;
			else
				continue;
		else if (inputnum == 6)
			if (map[1][2] == 0)
				map[1][2] = 1;
			else
				continue;
		else if (inputnum == 1)
			if (map[2][0] == 0)
				map[2][0] = 1;
			else
				continue;
		else if (inputnum == 2)
			if (map[2][1] == 0)
				map[2][1] = 1;
			else
				continue;
		else if (inputnum == 3)
			if (map[2][2] == 0)
				map[2][2] = 1;
			else
				continue;
		else
			continue;
		//output man
		for (int i = 0; i < 3; i++)
			p[i] = map[i];
		system("cls");
		printtable(p);
		result = iswin(p);
		if (result != 0)
			break;
		// Run AI
		for (int i = 0; i < 3; i++)
			p[i] = map[i];
		nextAI(p, &x, &y);
		map[x][y] = 2; 
		//output AI
		for (int i = 0; i < 3; i++)
			p[i] = map[i];
		system("cls");
		printtable(p);
		result = iswin(p);
	}
	free(p);
	if (result == 1)
		printf("\n    You Win!\n    ");
	else if (result == 2)
		printf("\n    AI Win!\n    ");
	else  
		printf("\n    Tie!\n    ");
	system("pause");
	return 0;
}
void nextAI(int **map,int *max_c,int *max_r) {
	int c, r;
	int score[3][3] = { 0 };
	for (c = 0; c < 3 ; c++) {
		for (r = 0; r  < 3; r ++) {
			if (map[c][r] != 0)
				score[c][r] = 0;
			else {
				//cols:
				//220
				if (map[c][0] == 2 && map[c][1] == 2 && map[c][2] == 0 ||
					map[c][0] == 0 && map[c][1] == 2 && map[c][2] == 2 ||
					map[c][0] == 2 && map[c][1] == 0 && map[c][2] == 2  )
			        score[c][r] = score[c][r] + x2; 
				//110
				else
				if (map[c][0] == 1 && map[c][1] == 1 && map[c][2] == 0 ||
				    map[c][0] == 0 && map[c][1] == 1 && map[c][2] == 1 ||
				    map[c][0] == 1 && map[c][1] == 0 && map[c][2] == 1  )
					score[c][r] = score[c][r] + o2;
				//100
				else
				if (map[c][0] == 1 && map[c][1] == 0 && map[c][2] == 0 ||
					map[c][0] == 0 && map[c][1] == 1 && map[c][2] == 0 ||
					map[c][0] == 0 && map[c][1] == 0 && map[c][2] == 1  )
					score[c][r] = score[c][r] + o1;
				//200
				else
				if (map[c][0] == 2 && map[c][1] == 0 && map[c][2] == 0 ||
					map[c][0] == 0 && map[c][1] == 2 && map[c][2] == 0 ||
					map[c][0] == 0 && map[c][1] == 0 && map[c][2] == 2  )
					score[c][r] = score[c][r] + x1;
				//clear
				else
				if (map[c][0] == 0 && map[c][1] == 0 && map[c][2] == 0 )
					score[c][r] = score[c][r] + clear;

				//row:
				//220
				if (map[0][r] == 2 && map[1][r] == 2 && map[2][r] == 0 ||
					map[0][r] == 0 && map[1][r] == 2 && map[2][r] == 2 ||
					map[0][r] == 2 && map[1][r] == 0 && map[2][r] == 2)
					score[c][r] = score[c][r] + x2;
				//110
				else
				if (map[0][r] == 1 && map[1][r] == 1 && map[2][r] == 0 ||
					map[0][r] == 0 && map[1][r] == 1 && map[2][r] == 1 ||
					map[0][r] == 1 && map[1][r] == 0 && map[2][r] == 1)
					score[c][r] = score[c][r] + o2;
				//100
				else
				if (map[0][r] == 1 && map[1][r] == 0 && map[2][r] == 0 ||
					map[0][r] == 0 && map[1][r] == 1 && map[2][r] == 0 ||
					map[0][r] == 0 && map[1][r] == 0 && map[2][r] == 1)
					score[c][r] = score[c][r] + o1;
				//200
				else
				if (map[0][r] == 2 && map[1][r] == 0 && map[2][r] == 0 ||
					map[0][r] == 0 && map[1][r] == 2 && map[2][r] == 0 ||
					map[0][r] == 0 && map[1][r] == 0 && map[2][r] == 2)
					score[c][r] = score[c][r] + x1;
				//claer
				else
				if (map[0][r] == 0 && map[1][r] == 0 && map[2][r] == 0)
					score[c][r] = score[c][r] + clear;
				//main diagonal line :
				if (r == c) {
					//220
					if (map[0][0] == 2 && map[1][1] == 2 && map[2][2] == 0 ||
						map[0][0] == 0 && map[1][1] == 2 && map[2][2] == 2 ||
						map[0][0] == 2 && map[1][1] == 0 && map[2][2] == 2)
						score[c][r] = score[c][r] + x2;
					//110
					else
					if (map[0][0] == 1 && map[1][1] == 1 && map[2][2] == 0 ||
						map[0][0] == 0 && map[1][1] == 1 && map[2][2] == 1 ||
						map[0][0] == 1 && map[1][1] == 0 && map[2][2] == 1)
						score[c][r] = score[c][r] + o2;
					//100
					else
					if (map[0][0] == 1 && map[1][1] == 0 && map[2][2] == 0 ||
						map[0][0] == 0 && map[1][1] == 1 && map[2][2] == 0 ||
						map[0][0] == 0 && map[1][1] == 0 && map[2][2] == 1)
						score[c][r] = score[c][r] + o1;
					//200
					else
					if (map[0][0] == 2 && map[1][1] == 0 && map[2][2] == 0 ||
						map[0][0] == 0 && map[1][1] == 2 && map[2][2] == 0 ||
						map[0][0] == 0 && map[1][1] == 0 && map[2][2] == 2)
						score[c][r] = score[c][r] + x1;
					//clear
					else
					if (map[0][0] == 0 && map[1][1] == 0 && map[2][2] == 0)
						score[c][r] = score[c][r] + clear;
				}

				//counter diagonal line :
				if (r + c == 2) {
					//220
					if (map[2][0] == 2 && map[1][1] == 2 && map[0][2] == 0 ||
						map[2][0] == 0 && map[1][1] == 2 && map[0][2] == 2 ||
						map[2][0] == 2 && map[1][1] == 0 && map[0][2] == 2)
						score[c][r] = score[c][r] + x2;
					//110
					else
					if (map[2][0] == 1 && map[1][1] == 1 && map[0][2] == 0 ||
						map[2][0] == 0 && map[1][1] == 1 && map[0][2] == 1 ||
						map[2][0] == 1 && map[1][1] == 0 && map[0][2] == 1)
						score[c][r] = score[c][r] + o2;
					//100
					else
					if (map[2][0] == 1 && map[1][1] == 0 && map[0][2] == 0 ||
						map[2][0] == 0 && map[1][1] == 1 && map[0][2] == 0 ||
						map[2][0] == 0 && map[1][1] == 0 && map[0][2] == 1)
						score[c][r] = score[c][r] + o1;
					//200
					else
					if (map[2][0] == 2 && map[1][1] == 0 && map[0][2] == 0 ||
						map[2][0] == 0 && map[1][1] == 2 && map[0][2] == 0 ||
						map[2][0] == 0 && map[1][1] == 0 && map[0][2] == 2)
						score[c][r] = score[c][r] + x1;
					//clear
					else
					if (map[2][0] == 0 && map[1][1] == 0 && map[0][2] == 0)
						score[c][r] = score[c][r] + clear;
				}
			}

		}//end of loop r
	}//end of loop c

	* max_c = 0;
	* max_r = 0;
  	for ( c = 0; c < 3; c++) {
		for ( r = 0;  r < 3;  r++) {
			if ( map[c][r] == 0 && score[*max_c][*max_r] < score[c][r]) {
				*max_c = c;
				*max_r = r;
			}
		}
	}

}
void var(bool isfirst) {
//  1.某条线仅仅有己方棋子一枚；2.某条线仅仅有敌方棋子一枚；3.某条线上空空如也。
//  AI先手  1>2>3   AI后手   2>1>3
	if (isfirst) {
		x1 = 10;
		o1 = 6;
	}
	else {
		x1 = 6;
		o1 = 10;
	}
}
void printtable(int **map) {
	int c, r;
	putchar('\n');
	for ( c = 0; c < 2; c++) {
		putchar('\t');
		for ( r = 0; r < 2; r++) {
			if (map[c][r] == 1)
				printf("Ο");
			else if (map[c][r] == 2)
				printf("×");
			else
				printf("  ");
			printf("┃");
		}

		if (map[c][r] == 1)
			printf("Ο");
		else if (map[c][r] == 2)
			printf("×");
		else
			printf("  ");
		printf("\n\t━╋━╋━\n");

	}
	putchar('\t');
	for (r = 0; r < 2; r++) {

		if (map[c][r] == 1)
			printf("Ο");
		else if (map[c][r] == 2)
			printf("×");
		else
			printf("  ");
		printf("┃");
	}
	if (map[c][r] == 1)
		printf("Ο");
	else if (map[c][r] == 2)
		printf("×");
	else
		printf("  ");
}

int iswin(int ** map) {
	//Not Over  -> 0
	//Man Win   -> 1
	//AI Win    -> 2
	//Tie       ->-1

	int i, win = 0;
	//is tie?
	bool can_input = false;
	for ( i = 0; i < 3; i++) 
		for (int j = 0; j < 3; j++) 
			if (map[i][j] == 0)
				can_input = true;
	if (can_input == false)
		return -1;


	//cols
	for (i = 0; i <= 2; i++) {
		if (map[i][0] != 0)
			if (map[i][0] == map[i][1])
				if (map[i][0] == map[i][2]) {
					win = map[i][0];
					break;
				}
	}
	//row
	if (win == 0) {
		for (i = 0; i <= 2; i++) {
			if (map[0][i] != 0)
				if (map[0][i] == map[1][i])
					if (map[0][i] == map[2][i]) {
						win = map[0][i];
						break;
					}
		}
	}
	//diagonal line :
	if (win == 0)  { 
		//counter diagonal line :
		if (map[0][0] != 0) 
			if (map[0][0] == map[1][1])
				if (map[0][0] == map[2][2])
					win = map[0][0];
		//main diagonal line :
		if (map[0][2] != 0) 
			if (map[0][2] == map[1][1])
				if (map[0][2] == map[2][0])
					win = map[0][2];
	}

	return win;
	
}

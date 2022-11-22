#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h" 

#define BINGO_RES_UNFINISHED	-1
#define BINGO_RES_FINISHED		0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check_gameEnd(void)
{
	int res = BINGO_RES_UNFINISHED;
	if (bingo_countCompletedLine() >= N_LINE )
		res = BINGO_RES_FINISHED;
		
	return res;
}

int get_number(void)
{
	
	int selNum=0;

	do {
		printf("select a number :");
		scanf("%d", &selNum);
		fflush (stdin); //프로그래밍 입출력 과정에서 버퍼(입력의 찌끄래기)를 비우는 역할 
		
		if (selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT)
		{
			printf("%i is not on the board! select other one.\n", selNum);
		}
	} while (selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT);
	
	return selNum;	
		
}


int main(int argc, char *argv[]) {
	
	int selNum;
	int cnt;
	
	srand((unsigned)(time(NULL)));
	
	//opening
	printf("############################################\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("            WELCOME TO BINGO GAME           \n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("############################################\n\n\n");
	
	//game
	
	bingo_init();
	
	
	//initialize bingo board
	
	while (check_gameEnd() == BINGO_RES_UNFINISHED) /*while (game is not end) //줄수가 N_BINGO보다 작음 //while문에서 빠져나가는 조건: 게임이 끝나는 조건*/ 
	{
		//bingo board 출력 : 숫자를 입력할 때마다 나의 bingo board가 달라짐.
		bingo_printBoard();
	
		//print no. of completed lines
		printf("No. of completed line : %i\n", bingo_countCompletedLine());
		
		//select a proper number //main 함수에서 직접 구현 
		selNum = get_number();
		
		//update the board status: X를 넣고 나의 bingo board가 달라짐. 
		bingo_inputNum(selNum);
	}
		
	



	//ending
	printf("\n\n\n\n\n\n\n\n\n");
	printf("############################################\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("        CONGRATULATION~ CONGRATULATION~     \n");
	printf("  Y O U W I N~  Y O U W I N~  Y O U W I N~  \n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("############################################\n\n");
	
	bingo_printBoard();

	return 0;
}

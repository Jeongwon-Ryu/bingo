#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h" 


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand((unsigned)(time(NULL)));
	
	//opening
	printf("############################################\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("            WELCOME TO BINGO GAME           \n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("############################################\n\n\n");
	
	//game
	
	bingo_init();
	bingo_printBoard();
	bingo_inputNum(21);
	bingo_printBoard();
	
	
	//initialize bingo board
	/*
	while (game is not end) //줄수가 N_BINGO보다 작음 //while문에서 빠져나가는 조건: 게임이 끝나는 조건 
	(
		//bingo board 출력 : 숫자를 입력할 때마다 나의 bingo board가 달라짐.
		
		
		//print no. of completed lines
		
		//select a proper number //main 함수에서 직접 구현 
		
		//update the board status: X를 넣고 나의 bingo board가 달라짐. 
	)
	*/	
	


	//ending
	printf("\n\n\n\n\n\n\n\n\n");
	printf("############################################\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("        CONGRATULATION~ CONGRATULATION~     \n");
	printf("  Y O U W I N~  Y O U W I N~  Y O U W I N~  \n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("############################################\n\n");

	return 0;
}

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
	while (game is not end) //�ټ��� N_BINGO���� ���� //while������ ���������� ����: ������ ������ ���� 
	(
		//bingo board ��� : ���ڸ� �Է��� ������ ���� bingo board�� �޶���.
		
		
		//print no. of completed lines
		
		//select a proper number //main �Լ����� ���� ���� 
		
		//update the board status: X�� �ְ� ���� bingo board�� �޶���. 
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
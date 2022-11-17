#include <stdio.h>
#define BINGONUM_HOLE		-1
#include "bingoBoard.h" 


//프로그램 형상화 Modeling, 배열(자료형 int, 2차원), 정수 1부터 N_size가 필요.  

static int bingoBoard[N_SIZE][N_SIZE]; 
//다 건드릴거니까 전역변수를 쓰는 것이 편할 것. 
static int numberStatus[N_SIZE*N_SIZE];
  
void bingo_init(void)
{
	int i, j;
	int cnt=1;
	
	for (i=0; i<N_SIZE; i++)
		for (j=0; j<N_SIZE; j++)
		{
			if (cnt == 13 )
			{
				bingoBoard[i][j] = BINGONUM_HOLE; //구멍이 뚫려서 board에는 존재하지 않는 숫자
				numberStatus[cnt-1] = BINGONUM_HOLE; 
				cnt++;
			}
			else
			{
				numberStatus[cnt-1]= i*N_SIZE + j;
				bingoBoard[i][j] = cnt++;
			}
				
		}
	
}
void bingo_printBoard(void)
{
	int i, j;
	
	printf("===========================\n");
	
	for (i=0;i<N_SIZE;i++)
	{
		for (j=0; j<N_SIZE;j++)
		{
			if (bingoBoard[i][j]== BINGONUM_HOLE)
				printf("X\t");
			
			else 
				printf("%i\t",bingoBoard[i][j]); //\t는 줄맞춤. 
		}	
		printf("\n");
	}
	printf("============================\n\n");
	
}
void bingo_inputNum(int sel)
{
	
	
}


int bingo_coundCompletedLine(void) //naming convention 규칙 잡기 ex. 언더바로 시작.
{

}

#include <stdio.h>
#define BINGONUM_HOLE		-1
#include "bingoBoard.h" 


//���α׷� ����ȭ Modeling, �迭(�ڷ��� int, 2����), ���� 1���� N_size�� �ʿ�.  

static int bingoBoard[N_SIZE][N_SIZE]; 
//�� �ǵ帱�Ŵϱ� ���������� ���� ���� ���� ��. 
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
				bingoBoard[i][j] = BINGONUM_HOLE; //������ �շ��� board���� �������� �ʴ� ����
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
				printf("%i\t",bingoBoard[i][j]); //\t�� �ٸ���. 
		}	
		printf("\n");
	}
	printf("============================\n\n");
	
}
void bingo_inputNum(int sel)
{
	
	
}


int bingo_coundCompletedLine(void) //naming convention ��Ģ ��� ex. ����ٷ� ����.
{

}

#define N_LINE 2
#define N_SIZE 5//main.c�� bingoBoard.c���� ������ �Ŵϱ� ������ٰ� ����� ���� ����. 
#define BINGO_NUMSTATUS_ABSENT -1
#define BINGO_NUMSTATUS_PRESENT 0


void bingo_init(void);
void bingo_printBoard(void);
void bingo_inputNum(int sel);
int bingo_countCompletedLine(void); //naming convention ��Ģ ��� ex. ����ٷ� ����.
int bingo_checkNum(int selNum);


 


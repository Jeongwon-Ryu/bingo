#define N_LINE 2
#define N_SIZE 5//main.c와 bingoBoard.c에서 수행할 거니까 헤더에다가 써놓는 것이 좋음. 
#define BINGO_NUMSTATUS_ABSENT -1
#define BINGO_NUMSTATUS_PRESENT 0


void bingo_init(void);
void bingo_printBoard(void);
void bingo_inputNum(int sel);
int bingo_countCompletedLine(void); //naming convention 규칙 잡기 ex. 언더바로 시작.
int bingo_checkNum(int selNum);


 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/*/
void  {
	srand((int)time(NULL));
	for (int i = 0; i < 5; i++) {
		
	}
}
//*/
/*/
int main(void) {
	int num;
	printf("바위는 1 가위는 2 보는 3 ");
	scanf("%d", &num);

	if (num == 1) {
		srand((int)time(NULL));
		for (int i = 0; i < 1; i++) {
			printf("당신은 : 바위 컴퓨터는: %d\n", (rand() % 3 + 1));
			
		}
	}
	else if (num == 2) {
		srand((int)time(NULL));
		for (int i = 0; i < 1; i++) {
			printf("당신은 : 가위 컴퓨터는: %d\n", (rand() % 3 + 1));
		}
	}
}
//*/
/*/
void check_human(int num) {
	if (num == 1) printf("당신은 바위 ");
	else if (num == 2) printf("당신은 가위 ");
	else printf("당신은 보 ");
}

void check_com(int num) {
	if (num == 1) printf("컴퓨터는 바위 ");
	else if (num == 2) printf("컴퓨터는 가위 ");
	else printf("컴퓨터는 보 ");
}

int main(void) {
	int num;
	int win = 0, draw = 0;
	srand((int)time(NULL));
	
	while (1) {

		printf("바위는 1 가위는 2 보는 3 ");
		scanf("%d", &num);

		if (num < 1 || num > 3) { continue; }

		int computer = rand() % 3 + 1;

		check_human(num);
		check_com(computer);

		if (num == computer) {
			printf("비겼습니다\n");
			draw++;
		}
		else if (num == 1) {
			if (computer == 2) {
				printf("당신이 이겼습니다.\n");
				win++;
			}
			else if(computer == 3) {
				printf("당신이 졌습니다.\n");
				break;
			}
		}
		else if (num == 2) {
			if (computer == 3) {
				printf("당신이 이겼습니다.\n");
				win++;
			}
			else if (computer == 1) {
				printf("당신이 졌습니다.\n");
				break;
			}
		}
		else if (num == 3) {
			if (computer == 2) {
				printf("당신이 이겼습니다.\n");
				win++;
			}
			else if (computer == 1) {
				printf("당신이 졌습니다.\n");
				break;
			}
		}

	}
	printf("게임의 결과 :%d 승, %d 무", win, draw);
}
//*/

int main(void) {
	srand((int)time(NULL));

	int com[3];
	int com_num = 0;

	//*
	while (1) {
		int tmp = rand() % 9 + 1;
		if (tmp != com[0] && tmp != com[1] && tmp != com[2]) {
			com[com_num] = tmp;
			
			if (com_num >= 2) break;
			else { com_num++; }
		}
	}
	//*/

	/*
	while (1) {
		int tmp = rand() % 500 + 1;
		bool isInArray = false;

		for (int i = 0; i < com_num; i++) {
			if (tmp == com[i]) {
				isInArray = true;
				break;
			}
		}

		if (isInArray == false) {
			com[com_num] = tmp;

			if (com_num >= 9) break;
			com_num++;
		}



	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", com[i]);
	}
	*/

	printf("%d %d %d\n", com[0], com[1], com[2]);
}
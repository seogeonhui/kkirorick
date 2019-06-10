#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/*
int main(void) {

	int win = 0;
	int draw = 0;
	bool userLoss = false;

	while (userLoss == false) {

		int user_input;
		int com_input;

		srand((int)time(NULL));
		com_input = (rand() % ((9-1)+1) + 1);

		printf("원하는걸 입력해보세요.\n");
		printf("1. 바위 2. 가위 3. 보\n");
		scanf("%d", &user_input);

		if (com_input == user_input) {
			printf("비겼습니다.\n");
			draw++;
		}
		else if (com_input == 1) {
			if (user_input == 2) {
				printf("졌습니다.\n");
				userLoss = true;
			}
			else {
				printf("이겼습니다.\n");
				win++;
			}
		}
		else if (com_input == 2) {
			if (user_input == 1) {
				printf("이겼습니다.\n");
				win++;
			}
			else {
				printf("졌습니다.\n");
				userLoss = true;
			}
		}
		else {
			if (user_input == 1) {
				printf("졌습니다.\n");
				userLoss = true;
			}
			else {
				printf("이겼습니다.\n");
				win++;
			}
		}
	}
	
	printf("게임의 결과 %d승 %d무\n", win, draw);

}
*/

int main(void) {

	bool strikeout = false;

	while (strikeout == false) {

		srand((int)time(NULL));
		int com_input[3];
		int user_input[3];


		//컴퓨터가 서로 다른 난수 3개 저장하는 알고리즘
		int com_num = 0;
		while (com_num < 3) {

			bool randIsInArr = false;
			int randInput = rand() % 10;

			for (int i = 0; i < com_num; i++) {
				if (com_input[i] == randInput) {
					randIsInArr = true;
					break;
				}
			}

			if (randIsInArr == false) {
				com_input[com_num] = randInput;
				com_num++;
			}
		}

		
		printf("유저의 선택:\n");
	
		for (int i = 0; i <3; i++) {
			scanf("%d", &user_input[i]);
		}

		int strike = 0;
		int ball = 0;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (com_input[i] == user_input[j]) {
					if (i == j) strike++;
					else ball++;
				}
			}
		}

		printf("%dstrike, %dball\n", strike, ball);

		if (strike == 3) { strikeout = true; }
	}
	
	printf("GAME OVER!\n");
}
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
	printf("������ 1 ������ 2 ���� 3 ");
	scanf("%d", &num);

	if (num == 1) {
		srand((int)time(NULL));
		for (int i = 0; i < 1; i++) {
			printf("����� : ���� ��ǻ�ʹ�: %d\n", (rand() % 3 + 1));
			
		}
	}
	else if (num == 2) {
		srand((int)time(NULL));
		for (int i = 0; i < 1; i++) {
			printf("����� : ���� ��ǻ�ʹ�: %d\n", (rand() % 3 + 1));
		}
	}
}
//*/
/*/
void check_human(int num) {
	if (num == 1) printf("����� ���� ");
	else if (num == 2) printf("����� ���� ");
	else printf("����� �� ");
}

void check_com(int num) {
	if (num == 1) printf("��ǻ�ʹ� ���� ");
	else if (num == 2) printf("��ǻ�ʹ� ���� ");
	else printf("��ǻ�ʹ� �� ");
}

int main(void) {
	int num;
	int win = 0, draw = 0;
	srand((int)time(NULL));
	
	while (1) {

		printf("������ 1 ������ 2 ���� 3 ");
		scanf("%d", &num);

		if (num < 1 || num > 3) { continue; }

		int computer = rand() % 3 + 1;

		check_human(num);
		check_com(computer);

		if (num == computer) {
			printf("�����ϴ�\n");
			draw++;
		}
		else if (num == 1) {
			if (computer == 2) {
				printf("����� �̰���ϴ�.\n");
				win++;
			}
			else if(computer == 3) {
				printf("����� �����ϴ�.\n");
				break;
			}
		}
		else if (num == 2) {
			if (computer == 3) {
				printf("����� �̰���ϴ�.\n");
				win++;
			}
			else if (computer == 1) {
				printf("����� �����ϴ�.\n");
				break;
			}
		}
		else if (num == 3) {
			if (computer == 2) {
				printf("����� �̰���ϴ�.\n");
				win++;
			}
			else if (computer == 1) {
				printf("����� �����ϴ�.\n");
				break;
			}
		}

	}
	printf("������ ��� :%d ��, %d ��", win, draw);
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
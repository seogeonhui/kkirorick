#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void) {
	int i;

	srand((int)time(NULL));

	for (i = 0; i < 3; i++)
		printf("���� ���:%d\n", rand()%((3-1)+1)+1);

	if (rand() == 1) {
		printf("����");
	}
	if (rand() == 2) {
		printf("����");
	}
	if (rand() == 3) {
		printf("��");
	}
}

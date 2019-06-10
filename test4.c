#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void) {
	int i;

	srand((int)time(NULL));

	for (i = 0; i < 3; i++)
		printf("정수 출력:%d\n", rand()%((3-1)+1)+1);

	if (rand() == 1) {
		printf("바위");
	}
	if (rand() == 2) {
		printf("가위");
	}
	if (rand() == 3) {
		printf("보");
	}
}

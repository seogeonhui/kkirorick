#include <stdio.h>
#include<stdlib.h>


int main(void) {
	int seed, i;
	printf("씨드값 입력");
	scanf("%d", &seed);
	srand(seed);

	for (i = 0; i < 5; i++) {
		printf("정수 출력: %d\n", rand());
		return 0;
	}

}


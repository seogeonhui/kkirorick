#include <stdio.h>
#include<stdlib.h>


int main(void) {
	int seed, i;
	printf("���尪 �Է�");
	scanf("%d", &seed);
	srand(seed);

	for (i = 0; i < 5; i++) {
		printf("���� ���: %d\n", rand());
		return 0;
	}

}


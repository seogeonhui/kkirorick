#include <stdio.h>

int main(void) {
	int i = 0;
	int arr[3];
	int max = 0;
	int	min=0;

	for ( i = 0; i < 3; i++) {
		printf("입력:");
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < 3; i++) {
		if (max < arr[i])
			max = arr[i]; 
		if (min > arr[i]) 
		    min = arr[i]; 
	}

	print("%d", max);
}
/*/
int main(void) {
	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++) {
		printf("입력:");
		scanf("%d", &arr[i]);
	}
	max = min = sum = arr[0];
	for (i = 1; i < 5; i++) {
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i]) 
			min = arr[i];

	}
	printf("%d", max);
	}
//*/

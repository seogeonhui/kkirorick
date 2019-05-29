#include <stdio.h>
/*/
int main(void) {
	
	int primeChkNum; //몇개까지 출력할지 입력받음
	int primeNum = 0; //반복문 내에서 몇개의 소수가 등장했는지 체크
	int num = 2; //반복문 내에서 지금 소수인지 확인할 숫자

	scanf("%d", &primeChkNum);


	while (primeNum < primeChkNum) {

		int isItPrime = 0; //0이면 소수 아니면 소수 아님

		for (int i = 2; i < num; i++) {
			if ((num%i) == 0) {
				isItPrime = 1;
				break;
			}
		}

		if (isItPrime == 0) {
			printf("%d ", num);
			primeNum++;
		}

		num++;
	}
}
//*/

/*
int main(void) {

	int arr[5];
	int max;
	int min;
	int sum;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	min = arr[0];

	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) { max = arr[i]; }
		if (arr[i] < min) { min = arr[i]; }

		sum += arr[i];
	}

}
//*/
/*/
int main(void) {

	char str[30] = "Good Morning!";

	for (int i = 0; i < sizeof(str) - 1; i++) {
		printf("%d\n", str[i]);
	}

	str[4] = '_';
	printf("%s\n", str);

	/*
	int strlen = 0;

	for (int i = 0; i < 30; i++) {
		if (str[i] == '\0') break;
		strlen++;
	}
	*/
/*/
int main(void) {
	/*
	int num = 0;
	char str[30];

	printf("단어입력");
	scanf("%s", &str);

	for (int i = 0; i < sizeof(str); i++) {
		
		
		if(str[i] == '\0') break;
		num++;
	}
	printf("%d", num);
	//*/
/*/
	char str[30];
	
	printf("단어입력");
	scanf("%s", &str);

	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == '\0') {

			int len = i - 1;
			for (int j = 0; j < len / 2; j++) {

				char e = str[j];
				str[j] = str[len-j];
				str[len - j] = e;

			}

			break;
		}
	}

	printf("%s", str);

}
//*/

/*
int main(void) {
	char str[30];
	int a = 0;

	printf("입력");
	scanf("%s", str);
	int max = str[0];
	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] > max) { max = str[i]; }
		
	}
	printf("%d", max);
}
//*/
/*/
int main(void) {

	int num;
	int num2;
	int *pnum = &num;
	*pnum = 10;
	printf("%d\n", *pnum);
	printf("%d\n", num);

	pnum = &num2;
	*pnum = 20;
	printf("%d\n", num2);
}
//*/
/*/
int main(void) {
	int num = 10;
	int *ptr1 = &num;
	int*ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d\n", num);
	return;
}
//*/
int main(void) {
	int num1 = 10;
	int num2 = 20;

	int *ptr1 = &num1;
	int *ptr2 = &num2;

	num1 = *ptr1 + 10;
	num2 = *ptr2 - 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("%d\n", *ptr1);
	printf("%d\n", *ptr2);



}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
/*/
typedef struct book {
	char book_human[20];
	char book_name[20];
	char book_page[40];
}book;

book readbook() {
	book info;
	fgets(info.book_human,20,stdin);
	fgets(info.book_name, 20, stdin);
	fgets(info.book_page, 40, stdin);
	return info;
}


void showbook(book num) {
	fputs(num.book_human, stdout);
	fputs(num.book_name, stdout);
	fputs(num.book_page, stdout);
}
int main(void) {

	book var[3];


	for (int i = 0; i < 3; i++) {
		var[i] = readbook();
	}

	printf("도서 정보 입력");
	
	
	for (int i = 0; i < 3; i++) {
		showbook(var[i]);
	}
}
//*/
/*/
typedef struct complex {
	double real;
	double fake;
}complex;

double complexadd(complex num1,complex num2) {
	double a, b;
	a = num1.real + num2.real;
	b = num1.fake + num2.fake;
	printf("%f+%fi\n", a, b);
}

double complexf(complex num1, complex num2) {
	double a, b;
	a = (num1.real*num2.real) - (num1.fake*num2.fake);
	b= (num1.fake*num2.real) + (num1.real*num2.fake);
	
	printf("%f+%fi\n", a, b);
}
int main(void) {
	complex a;
	complex b;

	scanf("%lf %lf", &a.real, &a.fake);
	scanf("%lf %lf", &b.real, &b.fake);


	complexadd(a, b);
	complexf(a, b);
}
//*/
/*/
int main(void) {
	int com[3];
	int user[3];
	srand((int)time(NULL));
	for (int i = 0; i < 3; i++) {
		int tmp = rand() % 9 + 1;
		com[i] = tmp;
		for (int j = 0; j < 3; j++) {
			if (tmp == com[j] && i != j) {
				i--;
			}
		}
	}
	
	while (1) {
		printf("start");
		
		int strike = 0, ball = 0;
		for (int i = 0; i < 3; i++) {
			scanf("%d", &user[i]);

			if (user[i] < 1 || user[i]>9) {
				printf("잘못된 입력입니다");
				i--;
				continue;
			}
		}

		for(int i = 0; i<3; i++) {

			for (int j = 0; j < 3; j++) {
				if (com[i] == user[j]) {
					if(i==j) strike++;
					else ball++;
				}

			}
			
		}
		printf("스트라이크: %d 볼 : %d\n", strike, ball);
		if (strike == 3)break;
	}
	printf("game over");
}
//*/
int main(void) {
	
}
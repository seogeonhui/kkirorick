#include <stdio.h>
/*/
int max(int a, int b, int c) {
	if (a > b) {
		return a > c ? a : c;
	}
	else if (b > a) {
		return b > c ? b : c;
	}
}
int min(int a, int b, int c) {
	if (a < b) {
		return a < c ? a : c;
	}
	else{
		return b < c ? b : c;
	}
}

int main(void) {
	int a, b, c;

	printf("수 입력");
	scanf("%d %d %d", &a, &b, &c);


	printf("큰수 :%d", max(a, b, c));
	printf("작은수 :%d", min(a, b, c));
}
//*/
/*/
double cel(double cel) {
	
	return (1.8* cel) + 32;
}
double fah(double fah) {
	return (fah - 32) / 1.8;
}

int main(void) {
	int f;
	double i;
	printf("1.섭씨 2.화씨");
	scanf("%d", &f);

	if (f == 1) {
		
		printf("입력");
		scanf("%lf", &i);
		printf("%f" ,cel(i));
	}
	if (f == 2) {
		
		printf("입력");
		scanf("%lf", &i);
		printf("%f", fah(i));
	}
}
//*/

int pibo(int pibo) {
	int p1=0, p2=1, p3, i;

	if (pibo == 1)
		printf("%d", p1);
	else if (pibo == 2) {
		printf("%d %d",p1 , p2);
	}

	for (i = 0; i < pibo - 2; i++) {
	
		p3 = p1 + p2;
		printf("%d", p3);

		p3 = p2;
		p2 = p1;
	}
}
int main(void) {
	int n;
	printf("몇번째 피보나치를 볼것인가");
	scanf("%d", &n);

	printf("%d", pibo(n));
}
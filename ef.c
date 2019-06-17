#include <stdio.h>

void printNum(int fnum) {
	printf("%d\n", fnum);
	fnum++;
}

void printNumRef(int *pnum) {
	printf("%d\n", *pnum);
	(*pnum)++;
}

int main(void) {

	int num = 10;
	
	//Call by Value
	printNum(num);
	printf("%d\n", num);

	//Call by Reference
	printNumRef(&num);
	printf("%d\n", num);

}
#include <stdio.h>
/*/
typedef struct book {
	char book_name[40];
	char book_person[20];
	int book_page;
}book;

void showbook(book * info) {
	printf("å�̸� : %s\n",info->book_name);
	printf("���� : %s\n", info->book_person);
	printf("�������� : %d\n", info->book_page);
}

int main(void) {
	book arr[2];
	
	for (int i = 0; i < 2; i++) {
		printf("å�̸�"); fgets(arr[i].book_name, 40, stdin);
		printf("����");	fgets(arr[i].book_person, 20, stdin);
		printf("��������"); scanf("%d", &arr[i].book_page);
		getchar();
	}

	for (int i = 0; i < 2; i++) {
		showbook(&arr[i]);
	}

	return 0;
}
//*/


typedef struct complex {
	double real;
	double fake;
}complex;

void complexadd(complex *fomula1, complex *fomula2) {
	double result1, result2;
	result1 = fomula1->real + fomula2->real;
	result2 = fomula1->fake + fomula2->fake;

	printf("%f + %fi\n", result1, result2);

}

void complexx(complex *fomula1, complex *fomula2) {
	double result1, result2;
	result1 = (fomula1->real* fomula2->real)-(fomula1->fake* fomula2->fake);
	result2 = (fomula1->fake*fomula2->real) - (fomula1->real*fomula2->fake);

	printf("%f + %fi\n", result1, result2);
}

int main(void) {

	complex var1; // �Ǽ� , ���
	complex var2; // �Ǽ� , ���

	printf("�Ǽ� ��� �Է�");
	scanf("%lf", &var1.real);
	scanf("%lf", &var1.fake);
	scanf("%lf", &var2.real);
	scanf("%lf", &var1.fake);
	

	printf("���Ҽ� ����");
	complexadd(&var1,&var2);
	printf("���Ҽ� ����");
	complexx(&var1, &var2);


}
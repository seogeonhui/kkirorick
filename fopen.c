#include <stdio.h>

int main(void) {
	char ch[10][20];

	//���� ��������� �б�
	FILE *fpw = fopen("test.txt", "w");


	//���� ������ �� ������ ��� ����� ����ó��
	if (fpw == NULL) {
		printf("���� ���� ����!\n");
		return -1;
	}

	//���Ͽ� ���ڿ� �Է�
	for (int i = 0; i < 10; i++) {
		fputs("file IO Test\n", fpw);
	}

	//���ڿ� �Է��� ���� ��, ���ڿ��� �Է��ϴ� ��Ʈ�� ����
	fclose(fpw);

	//���� �б������ ����
	FILE *fp = fopen("test.txt", "rb");

	//���� ������ �� ������ ��� ����� ����ó��
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return -1;
	}

	//���Ͽ� �ִ� ���ڿ� �а� ȭ�鿡 �����ֱ�
	for (int i = 0; i < 10; i++) {
		fgets(ch[i], 20, fp);
		printf("%s\n", ch[i]);
	}

	//���ڿ� �бⰡ ���� ��, ���ڿ��� �д� ��Ʈ�� ����
	fclose(fp);



	return 0;
}
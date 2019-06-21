#include <stdio.h>

int main(void) {
	char ch[10][20];

	//파일 쓰기용으로 읽기
	FILE *fpw = fopen("test.txt", "w");


	//파일 포인터 안 열렸을 경우 대비한 예외처리
	if (fpw == NULL) {
		printf("파일 오픈 실패!\n");
		return -1;
	}

	//파일에 문자열 입력
	for (int i = 0; i < 10; i++) {
		fputs("file IO Test\n", fpw);
	}

	//문자열 입력이 끝난 후, 문자열을 입력하는 스트림 삭제
	fclose(fpw);

	//파일 읽기용으로 열기
	FILE *fp = fopen("test.txt", "rb");

	//파일 포인터 안 열렸을 경우 대비한 예외처리
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return -1;
	}

	//파일에 있는 문자열 읽고 화면에 보여주기
	for (int i = 0; i < 10; i++) {
		fgets(ch[i], 20, fp);
		printf("%s\n", ch[i]);
	}

	//문자열 읽기가 끝난 후, 문자열을 읽는 스트림 삭제
	fclose(fp);



	return 0;
}
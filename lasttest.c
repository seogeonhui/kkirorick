#include <stdio.h>
#include <stdlib.h>

typedef struct Setting {
	char input_name[20];
	char input_tel_num[20];
}setting;

void showsetting(setting set) {
	printf("name:%s\n",set.input_name);
	printf("tel num:%s\n", set.input_tel_num);
}

setting readsetting() {
	setting set;
	printf("input name:\n"); scanf("%s", set.input_name);
	printf("input tel num \n"); scanf("%s", set.input_tel_num);
	return set;
}

int main(void) {

	setting arr[10];
	int size = 0;
	int sel;

	while (1) {
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.search\n");
		printf("4.print all\n");
		printf("5.exit\n");
		printf("choose the item: ");
		scanf("%d", &sel);


		if (sel == 1) {

			arr[size] = readsetting();
			size++;
			
		}
		else if (sel == 2) {

			int tmp_idx;
			printf("삭제할 이름 입력\n");
			scanf("%d", &tmp_idx);

			for (int i = tmp_idx; i < size; i++) {
				arr[i] = arr[i + 1];

			}
			size--;
			
		}
		else if (sel == 3) {
			int temp_idx;
			printf("이름 입력\n");
			scanf("%d", &temp_idx);
			if (temp_idx > size) {printf("잘못된 값을 입력하셨습니다.");}
			else {showsetting(arr[temp_idx]);}
			
			
		}
		else if (sel == 4) {
			printf("print all data\n");
			for (int i = 0; i <= size; i++) {
				showsetting(arr[i]);
			}
		}
		else if (sel == 5) {
			return -1;
		}
		else {
			printf("잘못된 입력입니다.\n");
		}

	}

}



	//문자 하나만 할때는 fgetc  문자열은 fgets

/*/
			printf("input name:\n"); scanf("%d", arr[0].input_name);
			printf("input tel number:\n"); scanf("%d", arr[0].input_tel_num);
			//*/
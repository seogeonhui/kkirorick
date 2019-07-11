#include <stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct set {
	char name[20];
	char number[20];
}set;

void writeinfo(set *info) {
	getchar();
	printf("inpuet name:"); fgets(info->name, 20, stdin);
	printf("input tel number:"); fgets(info->number, 20, stdin);
}

void showinfo(set info) {
	printf("inpuet name:%s\n",info.name);
	printf("input tel number:%s\n",info.number);
}


int main(void) {
	set var1[20];
	int count = 0;
	while (1) {
		int num = -1;

		printf("*****MENU*****\n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Search\n");
		printf("4.Print All\n");
		printf("5.Exit\n");
		printf("choose the item");
		scanf("%d", &num);

		if (num == 1) {
			
			 writeinfo(&var1[count]);
			 count++;
		}
		else if (num == 2) {
			int del;
			printf("몇번째를 삭제");
			scanf("%d", &del);
			del--;
			if (del<0 || del>count) {
				continue;
			}

			for (int i = del; i < count; i++) {
				var1[i] = var1[i+1];
			}
			count--;
		}
		else if (num == 3) {
			int search;
			printf("몇번째를 검색");
			scanf("%d", &search);
			showinfo(var1[search]);
		}
		else if (num == 4) {
			printf("print all date");
			for (int i = 0; i < count; i++) {
				showinfo(var1[i]);
			}
		}
		else if (num == 5) {
			return -1;
		}
		else {
			continue;
		}
	}
}
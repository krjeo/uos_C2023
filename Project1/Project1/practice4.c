# include <stdio.h>

int main(void) {

	char name[10];
	char dept[30];
	int birthday;

	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name));
	getchar();

	printf("학과를 입력하세요 : ");
	scanf_s("%s", dept, sizeof(dept));
	getchar();

	printf("생일을 입력하세요 : ");
	scanf_s("%d", &birthday);

	printf("이름 : %s\n", name);
	printf("학과 : %s\n", dept);
	printf("생일 : %d", birthday);

}
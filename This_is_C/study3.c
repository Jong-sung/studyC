#include <stdio.h>

int main(void) {
	char name[20] = "최종성";
	int old = 46;
	int length = 175;
	char blood = 'A';

	printf("10년 후의 프로필...\n");
	printf("이름: %s\n", name);
	printf("나이: %d\n", old);
	printf("키  : %.1lf\n", length - 0.5);
	printf("혈액형: %c형", blood);

	printf("3장 연습문제 풀이");

	return 0;

}
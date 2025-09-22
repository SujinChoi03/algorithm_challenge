#include <stdio.h>

int main() {
	int s1, s2, answer, manyeong;

	scanf("%d %d", &s1, &s2);


	for (int i = 0; i < s1; i++) {
		scanf("%d %d", &answer, &manyeong);
		if (answer != manyeong) {
			printf("Wrong Answer\n");
			return 0;
		}
	}

	for (int i = 0; i < s2; i++) {
		scanf("%d %d", &answer, &manyeong);
		if (answer != manyeong) {
			printf("Why Wrong!!!\n");
			return 0;
		}
	}

	printf("Accepted\n");

	return 0;
}

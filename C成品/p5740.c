#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int a, b, c, sum;
	char name[12];
} student;

int main() {
	int n, i, singer = 0, max = 0;
	scanf("%d", &n);
	student *studentn = (student *)malloc(n * sizeof(student));

	for (i = 0; i < n; i++) {
		scanf("%s %d %d %d", studentn[i].name, &studentn[i].a, &studentn[i].b, &studentn[i].c);
		studentn[i].sum = studentn[i].a + studentn[i].b + studentn[i].c;
	}

	max = studentn[0].sum;

	for (i = 1; i < n; i++) {
		if (studentn[i].sum > max) {
			max = studentn[i].sum;
			singer = i;
		}
	}

	printf("%s %d %d %d", studentn[singer].name, studentn[singer].a, studentn[singer].b, studentn[singer].c);
	free(studentn);
	return 0;
}
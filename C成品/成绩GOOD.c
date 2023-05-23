#include <stdio.h>

main() {
	int zm = 0;
	scanf("%d", &zm);

	if (zm == 100) {
		printf("Perfect\n");
	}  if (zm >= 90 &&zm<100) {
		printf("Great\n");
	} if (zm >= 60&&zm<=89) {
		printf("Good\n");
	}  if (zm >= 0&&zm < 60) {
		printf("Bad\n");
	}

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int t;scanf("%d", &t);
	int digits[t];
	for (int x = 0; x < t; ++x) scanf("%d", digits + x);
	int i = t - 1;
	while (i != 0) {
		if (digits[i] < 9) break;
		else i--;
	}
	int* final = malloc(sizeof(int) * (t + 1));
	int final_len = -1;
	if (t == 1) {
		if (digits[0] < 9) {
			final[0] = digits[0] + 1;
			final_len = 1;
		}
		else {
			final[0] = 1;
			final[1] = 0;
			final_len = 2;
		}
	}
	else if (i) {
		memcpy(final, digits, sizeof(int) * t);
		final[i]++;
		memset(final + i + 1, 0, sizeof(int) * (t - i - 1));
		final_len = t;
	}
	else {
		memset(final, 0, sizeof(int) * (t + 1));
		final[i] = 1;
		final_len = t + 1;
	}
	for (int x = 0; x < final_len; ++x) printf("%d ", final[x]);
	printf("\n");


}



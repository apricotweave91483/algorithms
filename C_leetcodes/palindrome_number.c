#include <stdio.h>
#include <stdlib.h>
int main() {
	int x; scanf("%d", &x);
	if (x < 0) {
		printf("NO\n");
		return 0;
	}
	int len = 0;
	int t = x;
	while (t) {
		len++;
		t /= 10;
	}
	short* arr = malloc(sizeof(short) * len);
	int i = len - 1;
	while (x) {
		arr[i] = x % 10;
		x /= 10;
		i--;
	}
	for (int x = 0; x < (len / 2); ++x) {
		if (arr[x] != arr[len - x - 1]) {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}

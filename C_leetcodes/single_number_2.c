#include <stdio.h>
int main() {
	short t; scanf("%hd", &t);
	short nums[t];
	for (int x = 0; x < t; ++x) scanf("%hd", nums + x);
	short cnt[60001] = {0};
	for (int x = 0; x < t; ++x) cnt[nums[x] + 30000]++;
	for (int x = 0; x < 60001; ++x) 
		if (cnt[x] == 1) {
			printf("%d\n", x - 30000);
			break;
		}
	return 0;
}

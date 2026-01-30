#include <stdio.h>
#include <stdlib.h>
int icmp(const void* x, const void* y) {
	int a = *(int*)x;
	int b = *(int*)y;
	return (a > b) - (b > a);
}
int main() {
	int t; scanf("%d", &t);
	int nums[t];
	for (int x = 0; x < t; ++x) scanf("%d", nums + x);
	qsort(nums, t, sizeof(int), icmp);
	
	int i = 0;
	while (i < t - 1) {
		if (nums[i] != nums[i + 1]) {
			printf("%d\n", nums[i]);
			return 0;
		}
		i += 2;
	}
	printf("%d\n", nums[t - 1]);
	return 0;
}

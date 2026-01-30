#include <stdio.h>
#include <stdlib.h>
int icmp(const void* x, const void* y) {
	int a = *(int*)x;
	int b = *(int*)y;
	return (a > b) - (b > a);
}
int ccmp(const void* x, const void* y) {
	unsigned char a = *(unsigned char*)x;
	unsigned char b = *(unsigned char*)y;
	return (a > b) - (b > a);
}
int main() {
	int t;scanf("%d", &t);
	int nums[t];
	for (int x = 0; x < t; ++x) scanf("%d", nums + x);

	qsort(nums, t, sizeof(int), icmp);
	int ok = 0;

	for (int x = 1; x < t; ++x) 
		if (nums[x] == nums[x - 1]) {
			ok = 1;
			break;
		}

	printf("%s\n", ok ? "YES" : "NO");
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
// Assume the two strings are the same length because otherwise its no fun
int main() {
	int len;
	scanf("%d", &len);
	char a[len + 1], b[len + 1];
	scanf("%s%s", a, b);

	qsort(a, len, 1, ccmp);
	qsort(b, len, 1, ccmp);

	printf("%s\n", strcmp(a, b) == 0 ? "YES" : "NO");
}

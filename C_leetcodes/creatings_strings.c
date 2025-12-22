#include <string.h>
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
	char s[9];
	scanf("%s", s);
	qsort(s, strlen(s), 1, ccmp);
	printf("%s\n", s);
}

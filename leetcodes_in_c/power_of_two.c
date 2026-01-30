#include <stdio.h>
int main() {
	int n; scanf("%d", &n);
	int i = 1, t = 30;
	int ok = 0;
	while (t--) {
		if (i == n) {
			ok = 1;
			break;
		}
		i <<= 1;
	}
	if (n == (1 << 30)) ok = 1;

	printf("%s\n", ok ? "YES" : "NO");

	return 0;
}

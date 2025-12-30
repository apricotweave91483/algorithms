#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
	
	int f = 0;
	
	for (int x = 0; x < t; ++x) {
		int temp; scanf("%d", &temp);
		f ^= temp;
	}

	printf("%d\n", f);
	
	return 0;
}

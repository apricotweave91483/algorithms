#include <stdio.h>
int main() {
	int nl1; scanf("%d", &nl1);
	int cnt1[1001] = {0};
	while (nl1--) {
		int temp; scanf("%d", &temp);
		cnt1[temp]++;
	}
	int nl2; scanf("%d",  &nl2);
	int cnt2[1001] = {0};
	while (nl2--) {
		int temp; scanf("%d", &temp);
		cnt2[temp]++;
	}
	int ret_size = 0;
	for (int x = 1; x < 1001; ++x)
		if (cnt1[x] && cnt2[x]) ret_size++;
	int ans[ret_size];
	int i = 0;
	for (int x = 1; x < 1001; ++x)
		if (cnt1[x] && cnt2[x]) {
			ans[i] = x;
			i++;
		}

	for (int x = 0; x < ret_size; ++x) printf("%d ", ans[x]);
	printf("\n");
	
	return 0;
}

	

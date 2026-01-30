#include <stdio.h>
#include <limits.h>

int main() {
	int cnt[2001] = {0};

	int t, k;

	scanf("%d%d", &t, &k);
	int nums[t];
	
	for (int x = 0; x < t; ++x) scanf("%d", nums + x);

	for (int x = 0; x < t; ++x) cnt[nums[x] + 1000]++;

	int ans[k];

	for (int i = 0; i < k; ++i) {
		int local_ans;
		int macks = INT_MIN;

		for (int x = 0; x < 2001; ++x) {
			int num = x - 1000;
			int cou = cnt[x];
			
			if (cou > macks) {
				macks = cou;
				local_ans = num;
			}
		}

		cnt[local_ans + 1000] = INT_MIN;
		ans[i] = local_ans;
	}

	for (int x = 0; x < k; ++x) printf("%d ", ans[x]);
	printf("\n");
}




	

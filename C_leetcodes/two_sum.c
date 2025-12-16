int icmp(const void* x, const void* y){
	int a=*(int*)x;
	int b=*(int*)y;
	return (a > b) - (b > a);
}
int ccmp(const void* x, const void* y){
	unsigned char a=*(unsigned char*)x;
	unsigned char b=*(unsigned char*)y;
	return (a > b) - (b > a);
}

int lb(int* arr, int len, int target){
	int l=0,r=len-1;
	int last=-1;
	while(l<=r){
		int m=l+(r-l)/2;
		int curr=arr[m];
		if(curr==target){
			last=m;
			r=m-1;
		}
		else if(curr>target)
			r=m-1;
		else
			l=m+1;
	}
	if(last==-1)return l;
	else return last;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int t, target;
	scanf("%d%d", &t, &target);
	int arr[t], og[t];
	for (int x = 0; x < t; ++x) scanf("%d", arr + x);
	memcpy(og, arr, t * sizeof(int));
	qsort(arr, t, sizeof(int), icmp);
	
	int i1 = -1, i2 = -1;
	for (int x = 0; x < t; ++x) {
		int ind = lb(arr, t, target - arr[x]);
		if (ind < t)
			if (arr[ind] == (target - arr[x])) {
				i1 = arr[x];
				i2 = arr[ind];
				break;
			}
	}
	if (i1 + 1) {
		int ans1, ans2;
		for (int x = 0; x < t; ++x) {
			if (og[x] == i1) ans1 = x;
			if (og[x] == i2) ans2 = x;
		}
		printf("[%d, %d]\n", ans1, ans2);
	}
	else printf("[-1, -1]\n");
}
				

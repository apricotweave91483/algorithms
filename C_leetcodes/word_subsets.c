#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void cnt(char* s, int* count) {
	int x = 0;
	while (s[x] != '\0') {
		count[s[x] - 'a']++;
		x++;
	}
}
int main() {
	
	int w1t,w2t;
	
	scanf("%d",&w1t);
	char** w1 = malloc(sizeof(char*) * w1t);
	for (int x = 0; x < w1t; ++x) {
		w1[x] = malloc(11);
		scanf("%s",w1[x]);
	}
	scanf("%d",&w2t);
	char** w2 = malloc(sizeof(char*) * w2t);
	for (int x = 0; x < w2t; ++x) {
		w2[x] = malloc(11);
		scanf("%s",w2[x]);
	}
	int maxcount[26] = {0}, curr[26] = {0};
	int i = 0;

	char** final = malloc(sizeof(char*) * w1t);
	for (int x = 0; x < w1t; ++x) final[x] = calloc(11,0);
	cnt(w2[0],maxcount);
	for (int x = 1; x < w2t; ++x) {
		memset(curr, 0, sizeof(curr));
		cnt(w2[x],curr);
		
		for (int x = 0; x < 26; ++x)
			if (curr[x] > maxcount[x]) maxcount[x] = curr[x];
	}
	
	for (int x = 0; x < w1t; ++x) {
		memset(curr, 0, sizeof(curr));
		cnt(w1[x], curr);
		int good = 1;
		for (int x = 0; x < 26; ++x) 
			if (maxcount[x] > curr[x]) {
				good = 0;
				break;
			}
		if (good) {
			strcpy(final[i], w1[x]);
			i++;
		}
	}
	for (int x = 0; x < i; ++x) 
		printf("%s\n", final[x]);
	


}



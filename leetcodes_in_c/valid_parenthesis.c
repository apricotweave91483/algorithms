#include <stdio.h>
#include <string.h>
int main() {
	char all[10001];
	char stack[10000];
	memset(stack, 0, 10000);
	scanf("%s", all);
	int i = 0;
	int good = 1;
	for (int x = 0; all[x] != '\0'; ++x) {
		if (all[x] == '(') {
			stack[i] = '(';
			i++;
		}
		else if (all[x] == '{') {
			stack[i] = '{';
			i++;
		}
		else if (all[x] == '[') {
			stack[i] = '[';
			i++;
		}
		else {
			if (all[x] == ')' && !(stack[i - 1] == '(')) {
				good = 0;
				break;
			}
			else if (all[x] == '}' && !(stack[i - 1] == '{')) {
				good = 0;
				break;
			}
			else if (all[x] == ']' && !(stack[i - 1] == '[')) {
				good = 0;
				break;
			}
			
			else i--;
		}
	}
	if (i) good = 0;
	printf("%s\n", good ? "YES" : "NO");
}

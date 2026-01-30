#include <stdio.h>
int main() {
    int t; scanf("%d", &t);
    for (;t--;) {
        int a, b; scanf("%d%d", &a, &b);
        printf("%d %d\n", (b <= a) ? b : a, (a > b) ? a : b);
    }        
}
 
#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 1;
    
    while (T--) {
        int m, n;
        if (scanf("%d", &m) != 1) break;
        int a[m];
        for (int i = 0; i < m; i++) {
            scanf("%d", &a[i]);
        }
        
        if (scanf("%d", &n) != 1) break;
        int b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        
        // Brute force intersection: O(m * n) time, O(1) space
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i] == b[j]) {
                    printf("%d ", a[i]);
                    break;
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}

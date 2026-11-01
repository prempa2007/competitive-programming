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
        
        // Two-pointer intersection of sorted arrays: O(m + n) time, O(1) space
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                i++;
                j++;
            } else if (a[i] < b[j]) {
                i++;
            } else {
                j++;
            }
        }
        printf("\n");
    }
    
    return 0;
}

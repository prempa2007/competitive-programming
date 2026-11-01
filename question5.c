#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 1;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    
    // Nested loop search for pair with difference k: O(n^2) time, O(1) space
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && a[j] - a[i] == k) {
                printf("1\n");
                return 0;
            }
        }
    }
    
    printf("0\n");
    return 0;
}

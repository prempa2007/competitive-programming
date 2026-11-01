#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 1;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    
    // Two-pointer approach on sorted array: O(n) time, O(1) space
    int i = 0, j = 1;
    while (i < n && j < n) {
        if (i != j && a[j] - a[i] == k) {
            printf("1\n");
            return 0;
        } else if (a[j] - a[i] < k) {
            j++;
        } else {
            i++;
        }
    }
    
    printf("0\n");
    return 0;
}

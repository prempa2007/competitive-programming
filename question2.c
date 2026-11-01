#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Floyd's Cycle Detection Algorithm (Tortoise and Hare): O(n) time, O(1) space
    int slow = a[0];
    int fast = a[0];
    
    do {
        slow = a[slow];
        fast = a[a[fast]];
    } while (slow != fast);
    
    slow = a[0];
    while (slow != fast) {
        slow = a[slow];
        fast = a[fast];
    }
    
    printf("%d\n", slow);
    return 0;
}

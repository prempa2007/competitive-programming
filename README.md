# DESIGN AND ANALYSIS OF ALGORITHMS
## Competitive Programming

This repository contains C implementations exploring algorithm optimization from brute force to optimal time complexity with $O(1)$ auxiliary space.

---

### Problems & Solutions

#### 1. Finding Duplicates — $O(n^2)$ Time, $O(1)$ Space (`question1.c`)
- **Problem**: Given a read-only array of $n$ integers with values in range $[1, n]$, find one repeating number.
- **Approach**: Brute-force nested loops comparing each pair $(i, j)$ with $j > i$.
- **Time Complexity**: $O(n^2)$
- **Space Complexity**: $O(1)$

---

#### 2. Finding Duplicates — $O(n)$ Time, $O(1)$ Space (`question2.c`)
- **Problem**: Given a read-only array of $n$ integers with values in range $[1, n]$, find one repeating number in linear time.
- **Approach**: Floyd's Cycle Detection Algorithm (Tortoise and Hare). Treating array values as pointers into indices guarantees a cycle at the duplicate value.
- **Time Complexity**: $O(n)$
- **Space Complexity**: $O(1)$

---

#### 3. Intersection of Two Sorted Arrays — $O(m \times n)$ Time, $O(1)$ Space (`question3.c`)
- **Problem**: Find common elements present in two sorted arrays of sizes $m$ and $n$.
- **Approach**: Nested iteration matching each element of array $A$ against array $B$.
- **Time Complexity**: $O(m \times n)$
- **Space Complexity**: $O(1)$

---

#### 4. Intersection of Two Sorted Arrays — $O(m + n)$ Time, $O(1)$ Space (`question4.c`)
- **Problem**: Find common elements present in two sorted arrays of sizes $m$ and $n$ in linear time.
- **Approach**: Two-pointer technique leveraging sorted order to advance either pointer in $O(1)$ per step.
- **Time Complexity**: $O(m + n)$
- **Space Complexity**: $O(1)$

---

#### 5. Pair with Given Difference — $O(n^2)$ Time, $O(1)$ Space (`question5.c`)
- **Problem**: Given a sorted array $A$ and integer $k$, determine if there exist indices $i \neq j$ such that $A[j] - A[i] = k$.
- **Approach**: Brute-force double loop examining all pairs $(i, j)$.
- **Time Complexity**: $O(n^2)$
- **Space Complexity**: $O(1)$

---

#### 6. Pair with Given Difference — $O(n)$ Time, $O(1)$ Space (`question6.c`)
- **Problem**: Given a sorted array $A$ and integer $k$, determine if there exist indices $i \neq j$ such that $A[j] - A[i] = k$ in linear time.
- **Approach**: Two-pointer technique ($i = 0, j = 1$). If $A[j] - A[i] < k$, increment $j$; if $> k$, increment $i$.
- **Time Complexity**: $O(n)$
- **Space Complexity**: $O(1)$

---

### How to Compile & Run

Compile any problem using GCC:
```bash
gcc question1.c -o question1
./question1
```

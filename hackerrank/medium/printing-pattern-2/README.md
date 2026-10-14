# Printing Pattern Using Loops

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Print a pattern of numbers from $1$ to $n$ as shown below.  Each of the numbers is separated by a single space.    

                                4 4 4 4 4 4 4  
                                4 3 3 3 3 3 4   
                                4 3 2 2 2 3 4   
                                4 3 2 1 2 3 4   
                                4 3 2 2 2 3 4   
                                4 3 3 3 3 3 4   
                                4 4 4 4 4 4 4   

**Input Format**

The input will contain a single integer $n$.  

**Constraints**

$1 \le n \le 1000$

**Output Format**

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T18:41:08.013Z  

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int min = top;
            if (left < min) min = left;
            if (bottom < min) min = bottom;
            if (right < min) min = right;

            printf("%d", n - min);

            if (j < size - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/printing-pattern-2/problem)
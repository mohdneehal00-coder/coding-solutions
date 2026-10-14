#include <stdio.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = *a - *b;

    *a = sum;
    *b = (diff < 0) ? -diff : diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);

    update(pa, pb);

    printf("%d\n%d\n", a, b);

    return 0;
}

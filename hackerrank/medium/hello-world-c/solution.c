#include <stdio.h>

int main() {
    char s[1000];

    scanf("%[^\n]", s);

    printf("Hello, World!\n");
    printf("%s\n", s);

    return 0;
}

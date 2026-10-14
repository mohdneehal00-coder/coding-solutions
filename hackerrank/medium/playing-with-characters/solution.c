#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sentence[1000];

    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]", sentence);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sentence);

    return 0;
}

#include <stdio.h>
int main() {
    char str[100];
    char *p;
    int count = 0;

    scanf("%s", str);
    p = str;

    while (*p != '\0') {
        if (*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
            *p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
            count++;
        p++;
    }

    printf("Vowels = %d", count);
    return 0;
}

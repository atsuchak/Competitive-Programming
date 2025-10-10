#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    char a, b[100], c[100];
    scanf(" %c", &a);            // space before %c to skip newline
    fgets(b, sizeof(b), stdin);
    fgets(c, sizeof(c), stdin);

    printf("%c", a);
    printf("%s", b);
    printf("%s", c);

    return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
    char a[50], b[50];
    gets(a);
    gets(b);
    strcat(a, b);
    printf("%s\n", a);
    printf("Length: %d", strlen(a));
    return 0;
}


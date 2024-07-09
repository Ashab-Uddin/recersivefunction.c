#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100]; // Make sure b has enough space
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    strcpy(b, a);
    printf("%s", b);
    return 0;
}

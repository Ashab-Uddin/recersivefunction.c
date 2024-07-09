#include <stdio.h>

void abc(int n) {
    int h;
    if (n != 0) {
        abc(n / 16);
        h = n % 16;
        if (h <= 9) {
            printf("%d", h);
        } else {
            printf("%c", h + 55);  // 'A' starts from 65, so for 10 it should be 65, hence 55 is added
        }
    }
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("0");  // To handle the case when the input number is 0
    } else {
        abc(n);
    }
    return 0;
}

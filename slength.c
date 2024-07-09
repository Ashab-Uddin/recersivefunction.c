#include<stdio.h>
int main(){
    int i,j;
    char a[20];
    printf("Enter a string: ");
    scanf("%[^\n]",a);
    for (i = 0; a[i] != 0; i++);
    printf("Reverse: ");
    for (j = i-1; j>=0; j--)

    printf("%c",a[j]);
    return 0;
}
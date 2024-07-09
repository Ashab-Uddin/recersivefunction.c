/*write a c program to input a string and reverse this string
and transfer other variable finally print this string*/
#include<stdio.h>
int main(){
    int i,j,k;
    char a[20],b[20];
    printf("Enter a string: ");
    scanf("%[^\n]",a);
    for (i = 0; a[i] != 0; i++);
    k = 0;
    for (j = i-1; j>=0; j--)
    {
        b[k] = a[j];
        k++;
    }
    b[k] = '\0';
    printf("%s",b);
    return 0;
}
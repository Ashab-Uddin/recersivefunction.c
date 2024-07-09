/*decimal to binary using recursive function*/
#include<stdio.h>
void abc(int n)
{
    if(n != 1)
    abc(n / 2);
    printf("%d",n % 2);
}
void main(){
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    printf("Binary Equivalent: ");
    abc(n);
}
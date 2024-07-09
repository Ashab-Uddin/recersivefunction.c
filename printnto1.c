/*input from user to print n to 1*/
#include<stdio.h>
void abc(int n)
{
    printf("%d ",n);
    if (n != 1)
    abc (n-1);
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    abc(n);
}
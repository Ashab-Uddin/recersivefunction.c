/*write a c program to find palindromic number using recursion*/
#include<stdio.h>
void abc (int n){
    int a,m,sum=0;
    m =n;
    while(n != 0){
        a =n%10;
        n=n/10;
        sum = sum*10+a;
    }
    if (m==sum)
        printf("%d is palindromic number",m);
    else
        printf("%d is not palindromic number",m);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    abc(n);
}
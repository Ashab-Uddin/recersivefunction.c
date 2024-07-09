#include<stdio.h>
int multiply (int n);
int main(){
    int n,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    m = multiply(n);
    printf("Multiply of %d to 1 is: %d",n,m);
    return 0;
}
int multiply (int n){
    int m;
    if (n == 0)
    return 1;
    m = n*multiply(n-1);
    return m;
}
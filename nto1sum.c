#include<stdio.h>
int sum (int n);
int main(){
    int n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    s = sum(n);
    printf("sum of %d to 1 is: %d",n,s);
    return 0;
}
int sum(int n){
    int s;
    if (n == 1)
    return 1;
    s = n + sum (n-1);
    return s;
}
#include<stdio.h>
int sumofdigit(int n);
int main(){
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum = sumofdigit(n);
    printf("%d is sum of digit : %d",n,sum);
    return 0;
}
int sumofdigit(int n){
    if (n<10)
    return n;
    return n%10+sumofdigit(n/10);
}
/*write c program to find sum of digits using recursive function*/
#include<stdio.h>
int sumofdigits (int n){
    if (n < 10){
        return n;
    }
    else {
        return n % 10+ sumofdigits(n/10);
    }
}
int main(){
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum = sumofdigits(n);
    printf("Sum of digits %d is number: %d",n,sum);
    return 0;
}
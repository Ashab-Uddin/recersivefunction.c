/*Write a c program to decimal to binary using recursion function*/
#include<stdio.h>
void binary(int n){
    if(n != 1)
    binary(n/2);
printf("%d",n%2);
}
int main(){
    int n;
    printf("Enter the a decimal number: ");
    scanf("%d",&n);
    printf("Decimal equivalent binary number: ");
    binary(n);
    
    return 0;
}
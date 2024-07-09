/*write a c program to sum of number n to 1 using recursive function*/
#include<stdio.h>
int sum(int n){
    int s;
    if (n==1)
        return 1;
    else 
    s =n+sum(n-1);
    return s;
}
int main(){
    int n,s;
    printf("Enter an ending number: ");
    scanf("%d",&n);
    s =sum(n);
    printf("sum of %d to 1 is: %d",n,s);
    return 0;
}
/*input from user to find factrorial using recursive function*/
#include<stdio.h>
int fact (int n);
int main(){
    int n,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    f = fact(n);
    printf("factorial of %d is: %d",n,f);
    return 0;
}
int fact (int n)
{
    int f;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        f = n*fact(n-1);
        return f;
    } 
}
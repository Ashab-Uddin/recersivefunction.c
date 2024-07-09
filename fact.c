/*write c program to find factorial any number using recursive function*/
#include<stdio.h>
int fact (int p){
    int f;
    if (p == 0){
        return 1;
    }
    else {
        f = p*fact(p - 1);
        return f;
    }
}
int main(){
    int n,f;
    printf("Which number you can find factorial: ");
    scanf("%d",&n);
    f = fact(n);
    printf("Factorial of %d is: %d",n,f);
    return 0;
}
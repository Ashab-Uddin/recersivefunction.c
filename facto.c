#include<stdio.h>
int fact(int n);
int main(){
    int n,f;
    printf("Enter your finding factorial number: ");
    scanf("%d",&n);
    f = fact(n);
    printf("%d is factorial: %d",n,f);
    return 0;
}
int fact(int n){
    int f;
    if(n==0)
    return 1;

f = n*fact(n-1);
    return f;
}

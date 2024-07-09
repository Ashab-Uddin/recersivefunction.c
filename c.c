#include<stdio.h>
void f (int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    f(n);
}
void f (int n){
    printf("%d ",n);
    if (n != 1) f (n - 1);
}
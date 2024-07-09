#include<stdio.h>
void abc(int n);
int main(){
    int n;
    printf("Enter your first number: ");
    scanf("%d",&n);
    abc(n);
}
void abc(int n){
    printf("%d ",n);
     if (n != 1)
    abc(n-1);
}
#include<stdio.h>
void abc(int n);
int main(){
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    printf("Octal Equivalent number: ");
    if(n == 0);
        printf("0");
    else
       abc(n);
    return 0;
}
void abc(int n){
    if (n != 1)
    abc(n/8);
    printf("%d",n%8);
}
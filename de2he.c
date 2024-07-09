#include<stdio.h>
void abc(int n);
int main(){
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    if (n == 0)
        printf("0");
    else
        abc(n);
    return 0;
}
void abc(int n){
    int h;
    if(n != 0){
        abc(n/16);
        h = n%16;
        if (h<=9)
            printf("%d",h);
        else   
            printf("%c",h+55);
    }
}
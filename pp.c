#include<stdio.h>
int abc(){
    int x,y;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y);
    return x+y;
}
int main(){
    int c;
    c =abc();
    printf("Sum of this number: %d",c);
    return 0;
}
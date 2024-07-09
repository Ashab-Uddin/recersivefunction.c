#include<stdio.h>
int fact(int n){
    int j,f=1;
    for (j=1;j<=n;j++)
        f =f*j;
    return f;
}
int main(){
    int i,n;
    float sum =0;
    printf("Enter the term: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        sum = sum+(float) i / fact(i);
    printf("sum of the series:%.2f",sum);
    return 0;
}
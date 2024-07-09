#include<stdio.h>
int fact(int p){
    int k;
    if(p==0)
        return 1;
    k =p*fact(p-1);
    return k;
}
int main(){
    int n,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    f =fact(n);
    printf("%d is factorial number is: %d",n,f);
    return 0;
}
#include<stdio.h>
void abc(int n){
    if(n != 1)
    abc(n-1);
printf("%d ",n);
}
int main(){
    int n;
    printf("Enter your last number: ");
    scanf("%d",&n);
    abc(n);

}
/*call by value and call by reference online lecture HK Rana sir*/
#include<stdio.h>
int main(){
    int a = 10,*p;
    p = &a;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%X\n",&a);
    printf("%X\n",p);
 return 0;
}
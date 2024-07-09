/*write a c program to copy a string in manually*/
#include<stdio.h>
int main(){
    int i = 0;
    char a[30],b[30];
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    for (i = 0;a[i]!='\0';i++)
    b[i] = a[i];
    b[i] = '\0';
    printf("You entered: %s",b);
    return 0;
}
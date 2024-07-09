/*input from user to print 1 to n using recursive function*/
#include<stdio.h>
void abc(int n)
{
    if (n != 1)
    {
        abc(n-1);
        printf("%d ",n);
    }
    else
    {
        printf("%d",n);
    }

}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    abc(n);
}

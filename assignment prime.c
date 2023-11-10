
#include<stdio.h>
int prime(int a)
{
    if(a%2!=0)
        printf("The number is prime.\n");
    else
        printf("The number is not prime.\n");
}
int main()
{
    int num;
    scanf("%d",&num);
    prime(num);
}

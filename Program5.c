#include<stdio.h>
//Program to print first 10 odd natural numbers in reverse order.
int main()
{
    int i=11;
    while(i>1)
        printf("%d\n",i*2-1,i--);
    return 0;
}

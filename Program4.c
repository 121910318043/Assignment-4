#include<stdio.h>
//program to print first 10 odd natural number
int main()
{
    int i=1,n=1;
    while(i<11)
    {
        printf("%d\n",n,i++);
        n=n+2;
    }
    return 0;
}

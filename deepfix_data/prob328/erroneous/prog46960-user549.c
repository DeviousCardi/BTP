#include <stdio.h>
#include <stdlib.h>
int fibseries(int n)    {
    if(n==0)    return 0;
    if((n==1)||(n==2))    return 1;
    else                  return fib(n-1)+fib(n-2); }
int fibcheck(int n)   { }
int main() {
    int t,n,i,p=0;
    int arr[100];
    scanf("%d\n",&t);
    for(i=0; i<20; i++)    {
        arr[i]=fibseries(i); }
    for(i=1; i<=t; i++)   {
        scanf("%d\n",&n);
        for(j=0; j<100; j++)   {
            if(arr[j]==n)    {
                printf("Yes\n");
                p=1; }
            else continue; } }
    if(p==0)    printf("No");
    return 0; }
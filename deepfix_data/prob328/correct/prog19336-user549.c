#include <stdio.h>
#include <stdlib.h>
int fib(int n)    {
    if(n==0)    return 0;
    if((n==1)||(n==2))    return 1;
    else                  return fib(n-1)+fib(n-2); }
int main() {
    int t,n,i,p=0,j;
    int arr[100];
    scanf("%d\n",&t);
    for(i=0; i<20; i++)    {
        arr[i]=fib(i); }
    for(i=1; i<=t; i++)   {
        scanf("%d\n",&n);
        for(j=0; j<100; j++)   {
            if(arr[j]==n)    {
                printf("yes\n");
                p=1;
                break; }
            else continue; } }
    if(p==0)    printf("no");
    return 0; }
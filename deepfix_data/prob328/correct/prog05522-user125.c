#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0)
       return 0;
    else if(n==1)
       return 1;
    else
       return fib(n-1)+fib(n-2); }
int main() {
    int k,t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&k);
        if(k==fib(n))
        printf("yes");
        else
        printf("\nno"); }
   	return 0; }
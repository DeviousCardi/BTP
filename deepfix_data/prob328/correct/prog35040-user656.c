#include <stdio.h>
#include <stdlib.h>
int fib(int x) {
    if(x==1)
    return 0;
    if (x==2)
    return 1;
    else
    return fib(x-1)+fib(x-2); }
int main() {
	int t,i,k,j=1;
	scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&k);
        while(fib(j)<=k)
        {   j++;
            if(fib(j-1)==k)
            printf("yes"); }
         if(fib(j-1)>k)
        printf("no"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int fib(int x)
{  if(x==0)
return -1;
    if(x==1)
    return 0;
    if (x==2)
    return 1;
    else
    return fib(x-1)+fib(x-2); }
int main() {
	int t,i,k;
	scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&k);
        int j=1;
        while(fib(j)<=k)
        {   j++;
            if(fib(j-1)==k)
            {printf("yes\n");break;} }
         if(fib(j-1)>k||k<0)
        printf("no\n"); }
	return 0; }
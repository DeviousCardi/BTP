#include <stdio.h>
#include <stdlib.h>
 int fib_num(int n) {
        if(n==0)
          return 0;
        if(n==1)
          return 1;
        else
        return fib_num(n-1)+fib_num(n-2); }
int main() {
    int num,n,i,t;
	scanf("%d",&t);
	for (i=0;i<t;i++) {
	        scanf("%d",&n);
	        num=fib_num(n);
	        printf("%d",num); }
	return 0; }
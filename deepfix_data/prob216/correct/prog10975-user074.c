#include <stdio.h>
#include <stdlib.h>
 int fib_num(int n) {
        if(n==1)
          return 0;
        if(n==2)
          return 1;
        else
        return fib_num(n-1)+fib_num(n-2); }
int main() {
    int num,n,i,t;
	scanf("%d\n",&t);
	for (i=0;i<t;i++) {
	        scanf("%d\n",&n);
	        num=fib_num(n);
	        printf("%d\n",num); }
	return 0; }
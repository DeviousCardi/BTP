#include <stdio.h>
#include <stdlib.h>
int fib(int);
int main() {
    int n;
    scanf("%d",&n);
    int i, x;
    for(i=0; i<n; i++){
        scanf("%d",&x);
        printf("%d",fib(x)); }
	return 0; }
int fib(int m){
    if(m==1)
      return 0;
    else if(m==2)
      return 1;
    else
      return (fib(m-1) + fib(m-2)); }
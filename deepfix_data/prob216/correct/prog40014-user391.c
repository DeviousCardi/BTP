#include <stdio.h>
#include <stdlib.h>
int fib(int);
int fib(int n){
    if(n==1)
      return 0;
    if(n==2)
      return 1;
    return (fib(n-2)+fib(n-1)); }
int main() {
    int num_test;
    scanf("%d",&num_test);
    int num,k;
    for(k=0;k<num_test;k++) {
        scanf("%d",num);
        printf("%d\n",fib(num)); }
	return 0; }
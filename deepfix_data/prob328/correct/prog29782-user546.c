#include <stdio.h>
#include <stdlib.h>
int Fib(int a[]) {
    int i;
    for(i=0;i<=20;i++) {
      if(i==0)
      return 0;
      else if(i==1)
      return 1;
      else
      return Fib(a[i-1])+Fib(a[i-2]); } }
int main() {
    int t;
    scanf("%d",&t);
	return 0; }
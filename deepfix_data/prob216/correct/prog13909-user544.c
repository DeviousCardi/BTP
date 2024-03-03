#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1)
        return 0;
    else {
    if(n==2)
    return 1;
    else
    return fib(n-1)+fib(n-2); } }
int main() {
  int p,i;
  int a[20];
  scanf("%d\n",&p);
  scanf("%d\n",&a[i]);
  for(i=0;i<p;i++){
  printf("%d\n",fib(a[i])); }
	return 0; }
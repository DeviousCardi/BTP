#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
  int n,i,j;
  scanf("%d\n",&n);
  int f[n];
  for(i=0;i<n;i++) {
    scanf("%d\n",&f[i]);
    for(j=0;j<20;j++) {
      if(f[i]==fib(j)) {
          printf("yes\n");
          return 0; }
      else
      printf("no\n");
      return 0; } }
	return 0; }
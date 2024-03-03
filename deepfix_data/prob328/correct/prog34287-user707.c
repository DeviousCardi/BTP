#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1)
    return 1;
    if(n==0)
    return 0;
    return fib(n-1)+fib(n-2); }
int is_fib(int a) {
    int i=0,b=0;
    for(i=0;i<20;i++) {
        if(a==fib(i)) {
        b=1;
        break; } }
    return b; }
int main() {
	int t=0,i=0,j=0,c=0;int a[i];
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&a[i]); }
	for(j=0;j<t;j++) {
	  c=is_fib(a[j]);
	  if(c==1)
	  printf("yes\n");
	  else printf("no\n"); }
	return 0; }
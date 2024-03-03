#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fib(n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }
int check_fib(int a) {
    int i; {
        for(i=0;i<20;i++) {
          if(a==fib(i))  return 1; } }
         return 0; }
int main() {
	int b,i,ar[100];
	scanf("%d",&b);
	for(i=0;i<b;i++) {
	scanf("%d",ar[i]);
	if (check_fib(ar[i])==1) {
	    printf("yes/n"); }
	else printf("no/n"); }
	return 0; }
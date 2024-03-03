#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1 || n==2)
      return 1;
    else
      return fib(n-1)+fib(n-2); }
int main() {
	int t,testarr[20],i,j,k,flag=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	   scanf("%d",&testarr[i]);
	for(j=0;j<t;j++) {
	    for(k=1;k<=20;k++) {
	        if(testarr[j]==fib(k)) {
	            printf("yes\n");
	            flag=1;
	            break; }
	        if(flag==0) {
	            printf("no\n");
	            break; } }
	    flag=0; }
	return 0; }
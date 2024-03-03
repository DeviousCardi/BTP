#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1 || n==2)
      return 1;
    else
      return fib(n-1)+fib(n-2); }
int main() {
	int t,testarr[20],i,j,k,flag=0,fib_arr[20];
	for(i=0;i<=20;i++) {
	    fib_arr[i]=fib(i); }
	scanf("%d",&t);
	for(i=0;i<t;i++)
	   scanf("%d",&testarr[i]);
	for(j=0;j<t;j++) {
	    for(k=1;k<=20;k++) {
	        if(testarr[j]==fib_arr[k] || testarr[j]==0) {
	            printf("yes\n");
	            flag=1;
	            break; }
	        else
	          flag=0; }
	    if(flag==0)
	     printf("no\n"); }
	return 0; }
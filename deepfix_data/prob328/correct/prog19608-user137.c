#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
    int t,i,a[100],n,flag=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<t;i++){
   for(n=0;n<20;n++){
       if(a[i]==fib(n))
           flag=1; }
   if(flag==1)
   printf("yes\n");
   else if(flag==0)
   printf("no\n"); }
	printf("%d",fib(7));
	return 0; }
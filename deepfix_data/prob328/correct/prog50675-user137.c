#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
    int t,i,a[100],n;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<t;i++){
   for(n=0;n<20;n++){
       if(fib(n)==a[i]){
           printf("yes");
           break; }
       else printf("No");
   break;}}
	return 0; }
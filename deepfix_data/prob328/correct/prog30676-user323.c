#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==1){
        return 0; }
        else if(n==2) {
            return 1; }
        else return fib(n-1)+fib(n-2); }
int main() {
	int i,j,a[20],t,count,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	scanf("%d\n",&a[i]); }
	for(j=0;j<t;j++){
	    count=0;
	   for(k=1;k<21;k++){
	       if(a[j]==fib(k)){
	   count=count+1;
	   }}
	   printf("%d",count);
	   if(count>=1){
	       printf("yes\n"); }
	   else printf("no\n"); }
	return 0; }
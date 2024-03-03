#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n<=1){
        return n;}
        else return fib(n-1)+fib(n-2); }
int main() {
	int i,j,a[21],t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	scanf("%d\n",&a[i]); }
	for(j=0;i<t;i++){
	    count=0;
	   for(k=0;k<21;k++){
	       if(a[i]==fib(k)){
	   count=count+1;
	   }}
	   if(count==1){
	       printf("yes"); }
	   else printf("no"); }
	return 0; }
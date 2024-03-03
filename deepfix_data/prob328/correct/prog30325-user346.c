#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0){
        return 0; }
    else if(n==1){
        return 1; }
    else{
        return fib(n-1)+fib(n-2); } }
int main() {
	int n;
	scanf("%d",&n);
	int a[n],count,j,i;
	for(i=0;i<n;i=i+1){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i=i+1){
	    count=0;
	    for(j=0;j<20;j=j+1){
	        if(a[i]==fib(j)){
	            count=count+1; } }
	    if(count>0){
	        printf("yes\n"); }
	    else{
	        printf("no\n"); } }
	return 0; }
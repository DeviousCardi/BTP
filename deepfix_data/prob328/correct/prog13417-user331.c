#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n){
    if(n==0){
        return 0; }
    else if(n==1){
        return 1; }
    else{
        return fibonacci(n-1)+fibonacci(n-2); } }
int main() {
	int i,j,t,a[1000],count=0;
	scanf("%d",&t);
	for(i=0;i<t;i=i+1){
	    scanf("%d",&a[i]); }
	for(i=0;i<t;i=i+1){
	    for(j=0;j<20;j=j+1){
	        printf("%d",fibonacci(j));
	        if(a[i]==fibonacci(j)){
	          count=count+1; }
	        else{
	            continue; } }
	    if(count>0){
	        printf("yes\n"); }
	    else{
	        printf("no\n"); } }
	return 0; }
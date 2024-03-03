#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int i,sum=0;
    if(n=0){
        sum=1; }
    for(i=1;i<n;i=i+1){
        sum=sum+catalan(n-i)*catalan(i); }
    return sum; }
int main() {
	int n;
	scanf("%d",&n);
	int a[n],i,j,count;
	for(i=0;i<n;i=i+1){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i=i+1){
	    count=0;
	    for(j=0;j<17;j=j+1){
	        if(a[i]==catalan(j)){
	            count=count+1; } }
	    if(count>0){
	        printf("yes"); }
	    else{
	        printf("no"); } }
	return 0; }
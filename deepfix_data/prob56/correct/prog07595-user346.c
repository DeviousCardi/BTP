#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int i,sum=0;
    if(n==0){
        sum=1; }
    else{
    for(i=0;i<n;i=i+1){
        sum=sum+catalan(n-i)*catalan(i); } }
    return sum; }
int main() {
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i=i+1){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i=i+1){
	    for(j=0;j<17;j=j+1){
	        if(a[i]==catalan(j)){
	            printf("%d",catalan(j+1)); } } }
	return 0; }
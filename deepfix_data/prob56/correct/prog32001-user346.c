#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0){
        return 1; }
    else{
        return ((2.0*(2*n-1))/(n+1))*catalan(n-1); } }
int main() {
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i=i+1){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i=i+1){
	    for(j=0;j<17;j=j+1){
	        if(a[i]==catalan(j)){
	           printf("%d\n",catalan(j+1));
	           break; } } }
	return 0; }
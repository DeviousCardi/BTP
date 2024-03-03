#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j,b,m;
	scanf("%d",&n);
	int a[n];
	void verify(m){
	    if (m==0){
	        if(a[0]>a[1]){
	            printf("Yes\n"); }
	        else{printf("No\n");} }
	    else if(m==n-1){
	        if(a[n-1]>a[n-2]){
	            printf("Yes\n"); }
	        else{printf("No\n");} }
	    else{
	        if(a[m]>a[m-1]&&a[m]>a[m+1]){
	            printf("Yes\n"); }
	        else{printf("No\n");} } }
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&b);
	for(j=0;j<b;j++){
	    scanf("%d",&m);
	    verify(m); }
	return 0; }
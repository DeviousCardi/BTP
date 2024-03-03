#include <stdio.h>
#include <stdlib.h>
int main() {
	int p,i,n,j,m;
	int verify(p){
	    if (p==0){
	        if(a[0]>a[1]){
	            printf("Yes"); }
	        else{printf("No");} }
	    else if(p==n-1){
	        if(a[n-1]>a[n-2]){
	            printf("Yes"); }
	        else{printf("No");} }
	    else{
	        if(a[p]>a[p-1]&&a[p]>a[p+1]){
	            printf("Yes"); }
	        else{printf("No");} } }
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&b);
	for(j=0;j<b;j++){
	    scanf("%d",&m);
	    verify(m); }
	return 0; }
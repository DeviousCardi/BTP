#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,nt,i,t;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<=n-1;i++){
	    scanf("%d",&a[i]); }
	scanf("%d\n",&nt);
	 for(i=0;i<nt;++i) {
	        scanf("%d\n",&t);
	     if((t==0)||(t==n-1)){
	        if((a[0]<a[1])){
	            printf("Yes"); }
	        if((a[n-1]<a[n-2])){
	            printf("Yes"); }
	        else{
	            printf("No"); } }
	     if((t>0)&&(t<n-1)){
	        if((a[t]<a[t-1])&&(a[t]<a[t+1])){
	         printf("Yes"); }
	        else{
	         printf("No"); } }
	     printf("\n"); }
	return 0; }
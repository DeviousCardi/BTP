#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20];
	int n,k,t,c,b,d;
	scanf("%d",&n);
	for(k=0;k<n;k++) {
	    scanf("%d",&a[k]); }
	scanf("%d",&t);
	for(d=1;d<=t;d++) {
	    scanf("%d",&c);
	    if(c==0); {
	        if(a[0]>a[1]){
	          printf("Yes\n");}
	        else{
	          printf("No\n");} }
	    if(c==n-1) {
	        if(a[n-1]>a[n-2]){
	          printf("Yes\n");}
	        else{
	            printf("No\n");} }
	    if(c!=0||c!=n-1) {
	        if((a[c]>a[c-1])&&(a[c]>a[c+1])){
	         printf("Yes\n");}
	        else{
	         printf("No\n");} } }
	return 0; }
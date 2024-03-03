#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20];
	int n,k,t,c,b;
	scanf("%d",&n);
	for(k=0;k<n;k++) {
	    scanf("%d",&b);
	    a[k]=b; }
	scanf("%d",&t);
	for(k=1;k<=t;k++) {
	    scanf("%d",&c);
	    if(c==0); {
	        if(a[0]>a[1]){
	          printf("Yes");}
	        else{
	          printf("No");} }
	    if(c==n-1) {
	        if(a[n-1]>a[n-2])
	          printf("Yes");}
	        else{
	            printf("No");} }
	    if(c!=0||c!=n-1) {
	        if((a[c]>a[c-1])&&(a[c]>[c+1])){
	         printf("Yes");}
	        else{
	         printf("No");} } }
	return 0; }
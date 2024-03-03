#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,l,m;
	int c1=1;
	int c2=1;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=1;i<n;i++){
	   if(a[i]==a[i-1]){
	       c2=c2+1; }
	   else{
	       if(c2>=c1){
	           m=a[i];
	           c1=c2;
	           c2=1; }
	       else{
	           m=a[i-1];
	           c2=1; } } }
	printf("%d",m);
	return 0; }
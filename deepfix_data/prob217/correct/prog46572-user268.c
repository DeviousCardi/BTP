#include <stdio.h>
#include <stdlib.h>
int main() {
 int n;
 int i,j,s;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i++){
	    for(j=i+1;j<n;j++){
	        if(a[i]+a[j]==s){
	       printf("(%d,%d)",&a[i],&a[j]); } } }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[10000],i,s,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]); }
	   		scanf ("%d",&s);
	   		for(i=0;i<n;i++){
	   		    j=i+1;
	   		    for(j=1;j<n;j++){
	   		    if(s==a[i]+a[j] && a[i]!=a[j])
	   		    printf("(%d,%d)",a[i],a[j]);} }
	return 0; }
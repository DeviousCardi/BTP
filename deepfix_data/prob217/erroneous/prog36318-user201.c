#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,i,j,c=0;
	scanf("%d", &n);
	int a[n],b[n];
	for(i=0;i<n,i++){
	    scanf("%d",&a[n]);
	    b[n]=1; }
	scanf("%d",&s);
	for(i=0;i<n,i++){
	    for(j=0;j<n;j++){
	        if(((a[i]+a[j])==s)&&(b[i]==1)){
	            printf("(%d,%d)",a[i],a[j]);
	            b[j]=0;
	            c=c+1 } } }
	if(c==0) printf("no output");
	return 0; }
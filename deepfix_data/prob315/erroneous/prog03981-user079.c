#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,N,j,c,k,p,s=0,q=0,r;
	scanf("%d",&N);
	for(i=0;i<N;i++) {
	    scanf("%d",&a[i]); }
	for(j=0;j<N;j++) {
	    c=0;
	    for(k=0;k<j;k++) {
	        if(a[j]<a[k]) {
	            p=a[j];
	            a[j]=a[k];
	            a[k]=p;
	            c=c+1; } }
	    s=s+c;
	    b[q]=c;
	    q=q+1; }
	printf("%d",s);
	for(r=0;r<=q-1;r++) {
	    printf("%d",b[p]); }
	return 0; }
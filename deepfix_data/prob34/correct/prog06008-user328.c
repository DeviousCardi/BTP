#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t,num[20],i,j,k,p,m,max;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&num[i]); }
	scanf("%d",&t);
	int h[t];
	for(j=0;j<t;j++) {
	    scanf("%d",&p);
	    h[j]=num[p]; }
	max=h[0];
	for(k=0;k<t-1;k++) {
	    if(max<h[k+1]) {
	        max=h[k+1]; } }
	for(m=0;m<t;m++) {
	    if(h[m]==max) {
	        printf("Yes"); }
	    else {
	        printf("No"); }
	    printf("\n"); }
	return 0; }
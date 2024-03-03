#include <stdio.h>
#include <stdlib.h>
int main() {
    char ch[500],c[500],s[501];
	int n,m,i,j,k,e,r=0,q;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++) {
	    scanf("%c",&ch[i]); }
	for(j=0;j<m;j++) {
	    scanf("%c",&c[j]); }
	if(n>m) {
	    e=m;
	    for(k=n-1;k>=0;k--) {
	       ch[k]=c[k+(n-m)] ; } }
	else {
	       e=n;
	       for(k=m-1;k>=0;k--) {
	           c[k]=ch[k+(m-n)]; } }
	   k=e-1;
	while(k>=0) {
	    sum[k]=r+a[k]+b[k];
	    if(sum[k]>9) {
	        s[k]=sum[k]%10;
	        r=(sum[k]+1)/10; }
	    else {
	        s[k]=sum[k]; }
	    k--; }
	for(q=0;q<e;q++) {
	    printf("%d",s[q]); }
	return 0; }
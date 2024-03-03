#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y;
	int i,j;
	int p[100],q[100],r[100],s[100];
    scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&x);
	scanf("%d",&y);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&p[i]); }
	for(i=0;i<m;i++) {
	    scanf("%d",&b[i]); }
	for(i=0,j=0,k=0;i<n&&j<m;) {
	    if((p[i]-x)<=q[j]&&q[j]<=(p[i]+y)) {
	        i++,j++;
	        r[k]=i;
	        s[k]=j;
	        k++; }
	    else if(q[j]<p[i]-x) {
	        j++; }
	    else i++; }
	printf("%d",k);
	for(i=0;i<k;i++) {
	    printf("%d %d",r[i],s[i]); }
	return 0; }
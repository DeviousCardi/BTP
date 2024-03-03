#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2;
	char ar1[500],ar2[500],sum[500];
	int i,j,t,n;
	int ca=0;
	scanf("%d\n%d\n",&n1,&n2);
	if(n1>=n2) {
	    n=n1;
	    i=0;j=n1-n2;
	    for(t=0;t<j;t++)
	    ar2[t]=0; }
	else {
	    n=n2;
	    i=n2-n1;j=0;
	    for(t=0;t<i;t++)
	    ar1[t]=0; }
	for(;i<n;i++) {
	    ar1[i]=getchar(); }
	for(;j<n;j++) {
	    ar2[j]=getchar(); }
	for(t=n-1;t>=0;t--) {
	    sum[t]=(char)((((int)(ar1[t]+ar2[t]+ca)-96)%10)+48);
	    ca=((int)(ar1[t]+ar2[t]+ca)-96)/10; }
	if(ca!=0)
	printf("%d",ca);
	for(t=0;t<n;t++) {
	    printf("%c",sum[t]); }
	return 0; }
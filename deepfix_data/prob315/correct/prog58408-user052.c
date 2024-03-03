#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n,arrn[1000],arrcount[1000],sum=0;
	scanf("%d ",&n);
	for(i=0;i<n;i++) {
	 scanf("%d",&arrn[i]);
	 printf("%d",arrn[i]); }
	for(j=0;j<n;j++) {
	    arrcount[j]=0;
	    for(k=1;k<n;k++) {
	    if(arrn[j]>arrn[j+k])
	       arrcount[j]++; } }
	for(i=1;i<=n;i++)
	 sum=sum+arrcount[i];
	printf("%d\n",sum);
	for(i=1;i<=n;i++)
	 printf("%d ",arrcount[i]);
	return 0; }
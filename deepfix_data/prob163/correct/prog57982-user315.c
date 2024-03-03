#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[501];
	int b[501];
	int c[501];
	int i,j,k,l;
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<501-m;i++)    {
	    a[i]=0; }
	for(i=501-m;i<501;i++)    {
	    scanf("%d",&a[i]); }
	for(j=0;j<501-n;j++)    {
	    b[j]=0; }
	for(j=501-n;j<501;j++)    {
	    scanf("%d",&b[j]); }
	c[500]=(a[500]+b[500])%10;
	for(k=499;k>=0;k--) {
	    c[k]=(((a[k]+b[k])%10)+(a[k+1]+b[k+1])/10)%10; }
	for(l=0;l<501;l++)  {
	    printf("%d",c); }
	return 0; }
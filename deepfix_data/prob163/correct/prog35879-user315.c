#include <stdio.h>
#include <stdlib.h>
int max(int p,int q)    {
    if(p>=q) return p;
    else     return q; }
int main() {
	int i,j,k,l,x;
	int m,n;
	scanf("%d",&m);
	printf("\n");
	scanf("%d",&n);
	x=max(m+1,n+1);
	int a[x];
	int b[x];
	int c[x];
	for(i=0;i<x-m;i++)    {
	    a[i]=0; }
	for(i=x-m;i<x;i++)    {
	    scanf("%d",&a[i]); }
	for(j=0;j<x-n;j++)    {
	    b[j]=0; }
	for(j=x-n;j<x;j++)    {
	    scanf("%d",&b[j]); }
	c[x-1]=(a[x-1]+b[x-1])%10;
	for(k=x-2;k>=0;k--) {
	    c[k]=(((a[k]+b[k])%10)+(a[k+1]+b[k+1])/10)%10; }
	for(l=0;l<x;l++)  {
	    printf("%d",c[l]); }
	return 0; }
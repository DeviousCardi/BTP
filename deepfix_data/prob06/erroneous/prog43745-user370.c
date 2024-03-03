#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,l,m,n,x,y,p;
    scanf("%d%d%d%d",&n,&m,&x,&y);
	int D_V[n],A_V[m];
	for(i=0;i<n;i=i+1)
	scanf("%d",&D_V[i]);
	for(j=0;j<m;j=j+1)
	scanf("%d",A_V[j]);
	for(k=0;k<n;k=k+1) {
	    for(l=0;l<m;l=l+1) {
	if(A_V[k]>=D_V[l]-x]&&A_V[k]<=D_V[l]+y)
	{a[p]=i+1;
	b[p]=j+1;
	p=p+1;
	break; } } }
	printf("%d",p);
	for(i=0;i<p;i=i+1)
	printf("%d%d\n",a[i],b[i]);
	return 0; }
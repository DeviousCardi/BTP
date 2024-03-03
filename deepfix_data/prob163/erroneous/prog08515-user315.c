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
	char a[x];
	int A[x];
	char b[x];
	int B[x];
	int C[x];
	for(i=0;i<x-m;i++)    {
	    a[i]=0;
	    A[i]='a[i]'-47; }
	for(i=x-m;i<x;i++)    {
	    a[i]=getchar()
	    A[i]='a[i]'-47; }
	for(j=0;j<x-n;j++)    {
	    b[j]=0;
        B[j]='b[j]'-47; }
	for(j=x-n;j<x;j++)    {
	    b[j]=getchar()
	    B[j]='b[j]'-47; }
	C[x-1]=(A[x-1]+B[x-1])%10;
	for(k=x-2;k>=0;k--) {
	    C[k]=(((A[k]+B[k])%10)+(A[k+1]+B[k+1])/10)%10; }
	return 0; }
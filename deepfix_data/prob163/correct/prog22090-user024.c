#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,p=0,b,i,w,q,z,a;
	scanf("%d",&n);
	scanf("%d",&m);
	if(n>m)
	z=n+1;
	else
	z=m+1;
	a=z;
	int s[n],t[m],u[z];
	b=(n-m);
	if(b>0)
	b=b;
	else
	b=-1*b;
	for(i=0;i<n;i++);{
	    scanf("%d",&s[i]); }
	for(i=0;i<m;i++){
	    scanf("%d",&t[i]); }
	for(i=0;i<a;i++){
	    w=s[n-1]+t[m-1];
	    q=w%10;
	    u[z-1]=q+p;
	    if(w<10)
	    p=0;
	    else
	    p=1;
	    n=n-1;
	    m=m-1;
	    z=z-1; }
	return 0; }
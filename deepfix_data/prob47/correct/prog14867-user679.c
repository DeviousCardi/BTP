#include <stdio.h>
#include <stdlib.h>
int f(int l,int s,int c) {
    int i;
    if(c==l-1)
    return s;
    float p=1.0;
    for(i=2;i<=c;i++)
    p=p*(c+i)/c;
    s=s+p;
    c++;
    f(l,s,c); }
int main() {
    int n,a[15],i;
    unsigned int b[15];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	b[i]=f(a[i],0,0);
	for(i=0;i<n;i++)
	printf("%d",b[i]);
	return 0; }
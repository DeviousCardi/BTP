#include <stdio.h>
void check(long b[],int x,long s);
int main() {
    int n,i;
    scanf("%d",&n);
    long a[n],sum;
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    scanf("%ld",&sum);
    check(a,n,sum);
	return 0; }
void check(long int b[],int x,long s) {
    int j,k;
    for(j=0;j<x-1;j++)
    for(k=j+1;k<x;k++)
    if(b[j]+b[k]==s)
    printf("(%ld,%ld)\n",b[j],b[k]); }
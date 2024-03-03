#include <stdio.h>
void check(int b[],int x,int s);
int main() {
    int n,i;
    scanf("%d",&n);
    long a[n],sum;
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    scanf("%ld",&sum);
    check(a,n,sum);
	return 0; }
void check(int b[],int x,int s) {
    int j,k;
    for(j=0;j<x-1;j++)
    for(k=j+1;k<x;k++)
    if(b[j]+b[k]==s)
    printf("(%d,%d)\n",b[j],b[k]); }
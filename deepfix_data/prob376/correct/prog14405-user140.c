#include <stdio.h>
#include <stdlib.h>
int catalan(int a[16],int k,int l) {
    int i;
    a[0]=1;
    for(i=0;i<l;i++)
    a[l+1]+=a[i]*a[l-i];
    if(l==k)
    return a[l+1];
    else
    return catalan(a,k,l+1); }
int main() {
	int i,t,a[16],k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	scanf("%d",&k);
	printf("%d\n",catalan(a,k,0)); }
	return 0; }
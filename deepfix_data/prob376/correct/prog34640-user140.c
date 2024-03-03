#include <stdio.h>
#include <stdlib.h>
int catalan(int a[16],int k,int l) {
    int i;
    a[0]=1;
    for(i=0;i<l;i++)
    a[l+1]+=a[i]*a[l-i];
    printf("%d\n",a[l+1]);
    if(l==k)
    return a[l];
    else
    return catalan(a,k,l+1); }
int main() {
	int i,t,a[16],k;
	scanf("%d",&t);
	scanf("%d",&k);
	printf("%d\n",catalan(a,k,0));
	return 0; }
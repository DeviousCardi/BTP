#include <stdio.h>
#include <stdlib.h>
int main() {int n,tc,i,j,k,t,a[i];
scanf("%d%d",&n,&tc);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
	int a[100],test[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&t);
	for(j=0;j<t;j++)
	scanf("%d",&test[j]);
	for(k=0;k<t;k++) {
	    int l=test[k];
	    if(l==0)
	    if(a[0]>a[1])
	    printf("Yes\n");
	    else printf("No\n");
	    else{
	    if(a[l]>a[l-1] && a[l]>a[l+1])
	    printf("Yes\n");
	    else
	    printf("No\n");} }
	return 0; }
	return 0; }
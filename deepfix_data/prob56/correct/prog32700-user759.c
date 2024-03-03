#include <stdio.h>
int main() {
    int a[10]={1};
    int i,j,k,t;
	for(i=0;i<10;i++) {
	    a[i+1]=1;
	    for(j=i;j>0;j--)
	        a[j]=a[j-1]+a[j+1];
	    a[0]=a[1]; }
	scanf("%d",&t);
	while(t--) {
	    i=0;
	    scanf("%d",&k);
	    while(a[i++]<=k);
	    printf("%d\n",a[i-1]); }
	return 0; }
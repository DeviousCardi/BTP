#include <stdio.h>
#include <stdlib.h>
int main() {int i,j,len1,len2;char waste;
      scanf("%d",&len1);
      scanf("%d",&len2);
      scanf("%c",&waste);
	char a[len1],b[len2],sum[501];
	int c[len1],d[len2];
	for(i=0;i<len1;i++) {
	    scanf("%c",&a[i]);
	    c[i]=a[i]-'0'; }
	scanf("%c",&waste);
	for(j=0;j<len2;j++) {
	    scanf("%c",&b[j]);
	    d[j]=b[j]-'0'; }
	printf("%d",d[0]);
	return 0; }
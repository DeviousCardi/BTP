#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,n,c=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("\n%d",&a[i]);
for(j=1;j<n-1;j++)
if(a[j]>a[j-1]&&a[j]>a[j+1]) c=c+1;
if(a[0]>a[1]||a[n-1]>a[n-2]) c=c+1;
if(c==0)printf("No");
else printf("Yes");
	return 0; }
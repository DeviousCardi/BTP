#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t,a[20],b[20];
	scanf("%d",&n);
	if(n<21)
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&t);
for(i=0;i<t;i++)
	scanf("%d",&b[i]);
for(i=0;i<t;i++)
{k=b[i];
if(a[k]==0) {
    if(a[k]>a[k+1])
printf("Yes\n");
else printf("No\n"); }
else if(k==t-1) {
    if(a[k]>a[k-1])
printf("Yes\n");
else printf("No"); }
else if(a[k-1]<a[k] && a[k]>a[k+1])
printf("Yes\n");
else printf("No\n"); }
	return 0; }
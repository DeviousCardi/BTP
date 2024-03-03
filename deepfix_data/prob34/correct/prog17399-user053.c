#include <stdio.h>
#include <stdlib.h>
int main() {int i,j;int a[20]; int n;int tc;int t[20];
scanf("%d%d",&n,&tc);
for(i=0;i<n;i++)
a[i]=getchar();
for(i=0;i<tc;i++)
scanf("%d",&t[i]);
if(n==1){printf("Yes");return 0;}
for(i=0;i<tc;i++)
{ j=t[i];
if(a[j]>=a[j-1]&&a[j]>=a[j+1])
printf("Yes\n");
else printf("No\n"); }
	return 0; }
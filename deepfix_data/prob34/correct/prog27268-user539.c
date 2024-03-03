#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,t,n,b[20];
		char a[20];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	  {    scanf("%d",&a[j]); }
	scanf("%d",&t);
	for(j=0;j<t;j++)
	  {    scanf("%d",&b[j]); }
	  for(j=0;j<t;j++) {
	  if(b[j]!=0&&b[j]!=(n-1)&&a[b[j]]>a[b[j]+1]&&a[b[j]]>a[b[j]-1]) {
	           printf("Yes\n"); }
	  else if(b[j]==0&&a[0]>a[1]||b[j]==(n-1)&&a[n-1]>a[n-2]) {
               printf("Yes\n"); }
	   else printf("No\n"); }
	return 0; }
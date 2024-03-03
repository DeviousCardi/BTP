#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,t,n,b[20];
		char ch,a[20];
	scanf("%d\n",&n);
     ch=getchar();
    for(i=0;i<n;i++) {
	     a[i]=ch;
	     ch=getchar(); }
	scanf("%d\n",&t);
	for(j=0;j<t;j++)
	  {    scanf("%d",&b[j]); }
	  for(j=0;j<t;j++) {
	  if(b[j]!=0&&b[j]!=(n-1)&&a[b[j]]>a[b[j]+1]&&a[b[j]]>a[b[j]-1]) {
	           printf("Yes\n"); }
	  else if(b[j]==0&&a[0]>a[1]||b[j]==(n-1)&&a[n-1]>a[n-2]) {
               printf("Yes\n"); }
	   else printf("No\n"); }
	return 0; }
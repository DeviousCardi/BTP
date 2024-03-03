#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	char ch,a[n];
	ch=getchar();
    for(i=0;i<n;i++) {
	     a[i]=ch;
	     ch=getchar(); }
	scanf("%d",&t);
	for(j=0;j<t;j++) {
	      scanf("%d",&k);
	      if(k!=0&&k!=n&&a[k]>a[k-1]&&a[k]>a[k+1])
	      printf("Yes\n");
	      else if(k=0&&a[0]>a[1]||k=n&&a[n]>a[n-1])
	           printf("Yes\n");
	      else printf("No\n"); }
	return 0; }
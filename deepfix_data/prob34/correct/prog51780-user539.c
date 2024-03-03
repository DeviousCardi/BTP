#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,t,k,n;
		char ch,a[20];
	scanf("%d",&n);
ch=getchar();
    for(i=0;i<n;i++) {
	     a[i]=ch;
	     ch=getchar(); }
	scanf("%d",&t);
	for(j=0;j<t;j++) {
	      scanf("%d",&k);
	      if((k!=0)&&(k!=n-1)&&(a[k]>a[k-1])&&(a[k]>a[k+1]))
	      printf("Yes\n");
	      else if((k==0)&&(a[0]>a[1])||(k==n-1)&&(a[n-1]>a[n-2]))
	           printf("Yes");
	      else printf("No\n"); }
	return 0; }
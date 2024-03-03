#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,j,l,m;
	int a[20];
	int x=0;
	scanf ("%d",&n);
	for (j=0;j<n;j++) {
	    scanf("%d",&a[j]); }
      scanf ("%d",&m);
    for(i=0;i<m;i++) {
        scanf("%d",&x);
        if(x==0 && a[0]<a[1])
        printf("Yes");
        else if (x==(n-1) && a[x]<a[x-1])
        printf("Yes");
        else if(a[x]<a[x-1] && a[x]<a[x+1] )
        printf("Yes");
        else
        printf("No");
        printf("\n"); }
	return 0; }
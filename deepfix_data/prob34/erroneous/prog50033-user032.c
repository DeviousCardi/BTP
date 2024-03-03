#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20];
    int i,j,t,n;
    scanf("%d",&n);
    scanf("%d",&a[n]);
    scanf("%d",&t);
    for(i=0;i<t;i=i++) {
     scanf("%d",&j);
     if(a[j]>=a[j-1]&&a[j]>=a[j+1])
     printf("Yes"\n);
     else printf("No"\n); }
	return 0; }
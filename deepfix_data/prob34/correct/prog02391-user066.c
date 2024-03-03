#include <stdio.h>
#include <stdlib.h>
int main() {
    int i=0,n,a[i];
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n-2;i++) {
        if(a[i]>a[i-1]&&a[i]>a[i+1])
        printf("Yes\n");
        else
        printf("No\n"); }
	return 0; }
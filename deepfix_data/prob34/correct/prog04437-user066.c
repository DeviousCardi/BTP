#include <stdio.h>
#include <stdlib.h>
int main() {
    int i=0,n,a[i],k,j;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(j=0;j<=k-1;j++) {
    scanf("%d",&i);
    if((i==0)&&(a[0]>a[1]))
        printf("Yes\n");
    else if((i==0)&&(a[0]<a[1]))
        printf("No\n");
    if((i>0)&&(i<n-1)) {
    if((a[i]>a[i-1])&&(a[i]>a[i+1]))
     printf("Yes\n");
    else if((a[i]<a[i-1])&&(a[i]<a[i+1]))
    printf("No\n"); }
    if((i==n-1)&&(a[n-1]>a[n-2]))
    printf("Yes\n");
    else if((i==n-1)&&(a[n-1]<a[n-2]))
    printf("No\n"); }
	return 0; }
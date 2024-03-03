#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i;
int t,j;
int a[20];
scanf("%d",&n);
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
    scanf("%d",&t);
    for(i=0;i<t;i++) {
    scanf("%d",&j);
    if(a[j]<a[j+1]&&a[j]<a[j-1])
    printf("Yes\n");
    else
    printf("No\n");
	return 0; } }
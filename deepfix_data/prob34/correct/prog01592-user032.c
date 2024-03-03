#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20];
    int i,j,t,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
     scanf("%d\n",&a[i]); }
    scanf("%d\n",&t);
    for(i=0;i<t;i=i++) {
     scanf("%d\n",&j);
     if(a[j]>a[j-1]&&a[j]>a[j+1])
     printf("Yes\n");
     else printf("No\n"); }
	return 0; }
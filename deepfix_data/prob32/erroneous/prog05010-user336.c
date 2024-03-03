#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    if(a[0]<a[1]||a[n-1]>a[n]) {
        printf("yes");
        break; }
    for(i=1;i<n;i++) {
     if(a[i]<a[i-1]&&a[i]>a[i+1]) {
         printf("yes");
         break; } }
    else(i==n)
    printf("no");
	return 0; }
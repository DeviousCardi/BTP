#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    scanf("%d",&n);
    printf("%d\n",n);
    int a[100];
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
    printf("%d",a[i]); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n;
int a[10];
scanf("%d",&n);
for(i=0;i<n;i=i+1) {
    scanf("%d",&a[i]);
    if(a[i]<=a[i+1])
    printf("%d",a[i+1]); }
	return 0; }
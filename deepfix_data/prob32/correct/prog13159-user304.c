#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d\n",&a[i]); }
    min = a[0];
    for(i=0;i<n;i++) {
        if(a[i]<min)
        min=a[i]; }
    printf("%d",min);
	return 0; }
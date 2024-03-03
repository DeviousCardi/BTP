#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,a[20],i,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++) {
        if(a[j]<a[i]) {
            c=a[i];
            a[i]=a[j];
            a[j]=c; } }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
	return 0; }
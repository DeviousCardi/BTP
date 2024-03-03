#include <stdio.h>
#include <stdlib.h>
int main() {
int a[1000],i,j,k,c;
scanf("%d",&k);
for(i=0;i<k;i++) {
    scanf("%d",&a[i]); }
for(i=0;i<n;i++)
{c=0;
    for(j=0;j<n;j++) {
        if(i<j&&a[i]>a[j]) {
            c=c+1; } }
    printf("%d ",c); }
	return 0; }
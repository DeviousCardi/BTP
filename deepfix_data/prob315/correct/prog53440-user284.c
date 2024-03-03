#include <stdio.h>
#include <stdlib.h>
int main() {
int a[1000],b[1000],i,j,k,c,d=0;
scanf("%d",&k);
for(i=0;i<k;i++) {
    scanf("%d",&a[i]); }
for(i=0;i<k;i++)
{c=0;
    for(j=0;j<k;j++) {
        if(i<j&&a[i]>a[j]) {
            c=c+1;
            d=d+1; } }
    b[i]=c; }
printf("%d\n",d);
for(i=0;i<k;i++) {
    printf("%d ",b[i]); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",a); }
for(j=0,count=0;j<n;j++) {
    for(i=0;i<n;i++) {
        if(i<j&&a[i]>a[j]) {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            count=count+1; }
printf("%d ",count); } }
	return 0; }
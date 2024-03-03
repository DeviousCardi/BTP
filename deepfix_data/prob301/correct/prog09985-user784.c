#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,a[50],i,j,pos,max,count[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    count[i]=0;
    for(i=0;i<(n-1);i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j])
            count[i]++; } }
    max=count[0];
    pos=0;
    for(i=1;i<n;i++) {
        if(count[i]>max) {
            max=count[i];
            pos=i; } }
    printf("%d",a[pos]);
	return 0; }
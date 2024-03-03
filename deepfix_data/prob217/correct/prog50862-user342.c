#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,S;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++); {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++); {
        printf("%d",i); }
    scanf("%d",&S);
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            if(a[i]+a[j]==S)
            printf("%d,%d\n",a[i],a[j]); } }
	return 0; }
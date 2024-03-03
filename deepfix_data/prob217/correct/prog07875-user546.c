#include <stdio.h>
#include <math.h>
int main() {
    int a[10000];
    int i,j,n,s;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("\n%d",&s);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if((a[i]+a[j])==s) {
                printf("%d",a[i]); } } }
	return 0; }
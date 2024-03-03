#include <stdio.h>
int main() {
    int n,k,count=0,i,j,l;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++) {
        for(l=j+1;l<n;l++) {
            if(a[j]>a[l]) {
                if(j-i<=k)
                count++; } } }
	return 0; }
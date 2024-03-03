#include <stdio.h>
#include <stdlib.h>
int max(int x,int y) {
    if(x>y)
        return x;
    else
        return y; }
int main() {
    int n,i,k,j;
    int a[n];
    int sum[n];
    for(k=0;k<i;k++) {
        sum[k]=0; }
    scanf("%d",&a[0]);
    for(i=1;i<n;i++) {
        scanf("%d",&a[i]);
        for(j=0;j<i;j++) {
            if(a[i]==a[j])
                sum[i]=sum[i]+1; } }
	return 0; }
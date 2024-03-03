#include <stdio.h>
#include <stdlib.h>
int max(int x,int y) {
    if(x>y)
        return x;
    else
        return y; }
int main() {
    int n,i,k,j,l,w;
    scanf("%d",&n);
    int a[n];
    int sum[n];
    for(k=0;k<n;k++) {
        sum[k]=0; }
    scanf("%d",&a[0]);
    for(i=1;i<n;i++) {
        scanf("%d",&a[i]);
        for(j=0;j<i;j++) {
            if(a[i]==a[j])
                sum[i]=sum[i]+1; } }
    l=max(sum[1],sum[2]);
    for(m=1;m<n;m++) {
        l=max(l,sum[m+1]); }
    sum[w]=l;
    printf("%d",a[w]);
    return 0; }
	return 0; }
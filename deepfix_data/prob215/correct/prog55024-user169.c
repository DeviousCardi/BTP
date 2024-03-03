#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,k,a[100],sum;
    scanf("%d",&n);
    k=0;
    for(i=1;i<n;i++) {
        if(n%i==0) {
            a[k]=i;
            k++; }
        else
        continue; }
    sum=0;
    for(i=0;i<k;i++) {
        sum=sum+a[i]; }
    if(sum==n)
    printf("YES");
    else
    printf("NO");
	return 0; }
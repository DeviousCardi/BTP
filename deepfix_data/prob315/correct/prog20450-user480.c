#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,c,sum;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    sum=0;
    for(i=0;i<n;i++) {
        c=0;
        for(j=i;j<n;j++) {
            if(a[i]>a[j]) {
                c++; } }
        printf("%d ",c);
        sum=sum+c; }
    printf("%d",sum);
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int p[100],n,a[1001];
    int k,i,j,l,sum=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++) {
        p[j]=0;
        for(k=j+1;k<n;k++) {
            if(a[j]>a[k]) {
                p[j]=p[j]+1; } }
        sum=sum+p[j]; }
    printf("%d\n",sum);
    for(l=0;l<n;l++) {
        printf("%d ",p[l]); }
    return 0; }
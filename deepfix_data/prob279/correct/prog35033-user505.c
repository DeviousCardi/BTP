#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++)
    a[j]=0;
    for(i=0;i<n;i++) {
        scanf("%d",&k);
        a[k-1]=a[k-1]+1; }
    for(j=0;j<n;j++) {
    if(a[j]>1)
    printf("%d\n",j+1);
    else {
    if(a[j]<1)
    printf("%d",j+1); } }
    return 0; }
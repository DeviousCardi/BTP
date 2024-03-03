#include <stdio.h>
int main() {
    int a[100000],i,j,n,k,tmp;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-i-1;j++) {
            if(a[j+1]>a[j]) {
                tmp=a[j+1];
                a[j+1]=a[j];
                a[j]=tmp; } } }
    printf("%d",a[k-1]);
    return 0; }
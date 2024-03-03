#include <stdio.h>
int main() {
    int a[100],i,n,d,temp=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(i=1;i<=d;i++) {
        for(i=1;i<=n;i++) {
            temp=a[n];
            a[1]=temp;
            a[i+1]=a[i];
            printf("%d %d ",a[1],a[i+1]); } }
    return 0; }
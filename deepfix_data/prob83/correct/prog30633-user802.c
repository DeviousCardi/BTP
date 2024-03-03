#include <stdio.h>
int main() {
    int a[100],i,n,d,temp=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
        for(i=1;i<=n;i++) {
            temp=a[n];
            a[i+1]=a[i];
            a[1]=temp; }
           printf("%d ",a[i+d]);
    return 0; }
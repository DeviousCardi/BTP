#include <stdio.h>
int main() {
    int a[100],i,n,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(i=1;i<=n;i++) {
        if(i+d>n) {
           a[i+d]=a[i];
           printf("%d ",a[i+d]); }
        else
        printf("%d ",a[i]); }
    return 0; }
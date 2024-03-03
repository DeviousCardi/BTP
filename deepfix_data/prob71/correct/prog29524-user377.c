#include <stdio.h>
int main() {
    int a[100000],c,n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(a[j]>a[i]) {
                c=a[j];
                a[j]=a[i];
                a[i]=c; } } }
    if(n%2==1) {
        printf("%d",a[n/2]); }
    else {
        printf("%d",((a[n/2]+a[n/2-1])/2.0)); }
    return 0; }
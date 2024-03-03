#include <stdio.h>
int main() {
    int a[100000],c,n,i,j;
    float ans;
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
        ans=(a[n/2-1]+a[n/2])/2.0;
        printf("%.1f",ans); }
    return 0; }
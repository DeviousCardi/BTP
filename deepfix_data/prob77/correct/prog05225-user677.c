#include <stdio.h>
int main() {
    int a[1000],i,j,l,x=0,y=0,n,p;
    scanf("%d",&p);
    for(i=0;i<p;i++) {
        scanf("%d",&a[i]); }
    l=a[0];
    n=a[0];
    for(j=1;j<n;j++) {
        if(a[j]<=n) {
            n=a[j];
            y=j; }
        if(a[j]>=l) {
            l=a[j];
            x=j; } }
    a[y]=l;
    a[x]=n;
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }
#include<stdio.h>
int main() {
    int a[20],i,j,m,n,max;
    m=1;
    max=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        b=a[i];
        for(j=i;j<n;j++) {
            if(a[j]>b) {
                max=max+1;
                b=a[j]; } }
        if(max>m)
        m=max;
        max=1; }
    printf("%d",m);
    return 0; }
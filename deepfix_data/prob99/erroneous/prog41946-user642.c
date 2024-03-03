#include<stdio.h>
int main() {
    int i,j,n,c=1,max=1,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        t=a[i];
        for(j=1;j<n;j++) {
                if(a[i+j]>t) {
                    t=a[i+j];
                    c++; } }
        if(c>max)
            max=c; }
    printf("%d",max);
    return 0; }
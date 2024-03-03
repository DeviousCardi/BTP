#include <stdio.h>
int main() {
    int n,s,a[30],i,j,c;
    scanf("%d %d\n",&n,&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-2;i++) {
        for(j=i+1;j<n-1;j++) {
            if(a[j+1]>a[j]) {
                c=a[j+1];
                a[j+1]=a[j];
                a[j]=c; } }
        if(a[i]>a[n-1]) {
            c=a[i];
            a[i]=a[n-1];
            a[n-1]=c; } }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0; }
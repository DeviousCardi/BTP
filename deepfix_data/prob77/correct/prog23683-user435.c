#include <stdio.h>
int main() {
    int n,i,j,k,c=0,d,p,t; scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++) {
            scanf("%d",&a[i]); }
    int max=a[0];
    for (j=0;j<n-1;j++) {
            if (a[j+1]>a[j]) {max=a[j+1];c=j+1;} }
    int min=a[0];
    for (k=0;k<n-1;k++) {
            if (a[k+1]<a[k]) {min=a[k+1];d=k+1;} }
    p=a[c];
    a[c]=a[d];
    a[d]=p;
    for (t=0;t<n;t++) {
            printf("%d ",a[t]); }
    printf("end");
    return 0; }
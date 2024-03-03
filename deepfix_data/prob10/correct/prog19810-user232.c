#include<stdio.h>
int main() {
    int n,i,j,k,l,m;
    scanf("%d",&n);
    int a[n],max[20];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    l=0;
    m=0;
    for(j=0;j<n;j++) {
        max[0]=a[j];
        for(k=j+1;k<n;k++) {
           if(a[k]>max[l]) {
               l++;
               max[l]=a[k]; } }
        if(l>m)
        m=l; }
    printf("%d",m+1);
    return 0; }
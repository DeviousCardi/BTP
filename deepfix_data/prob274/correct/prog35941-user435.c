#include <stdio.h>
int main(){
    int n,i,j=0,k,p,c=0,d=0; scanf("%d",&n);
    int a[n],b[n];
    for (i=0;i<n;i++) {
            scanf("%d",&a[i]); }
    for (i=0;i<n;i++) {
            b[i]=a[j]; printf("%d\n",b[i]);
            j=b[i];
            c++; }
    return 0; }
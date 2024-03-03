#include <stdio.h>
int main(){
    int n,i,j=1,k,p,c=0,d=0; scanf("%d",&n);
    int a[n],b[n];
    for (i=0;i<n;i++) {
            scanf("%d",&a[i]); }
    for (i=0;i<n;i++) {
            b[i]=a[j-1];
            j=b[i]; printf("%d\n",j); }
    return 0; }
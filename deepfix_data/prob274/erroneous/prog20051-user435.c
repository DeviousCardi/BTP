#include <stdio.h>
int main(){
    int n,i,j=0,k,p; scanf("%d",&n);
    int a[n],b[n];
    for (i=0;i<n;i++) {
            scanf("%d",&a[i]); }
    for (i=0;i<n;i++) {
            b[i]=a[j];
            j=b[i];
            c++;
            for (k=0;k<i;k++) {
                    if (b[i]==b[k]) {
                           p=k;
                           break; } }
            if (p==k) break; }
    return 0; }
#include <stdio.h>
int main(){
    int i,j,k,b,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        for(j=i;j<n;j++) {
            scanf("%d",&k);
            for(b=i;b<n;b++)
            a[i]=a[k];
            printf("%d",a[i]); } }
    return 0; }
#include <stdio.h>
int main(){
    int i,k,b,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        scanf("%d",&k);
            a[i]=a[k];
         printf("%d",a[i]); }
    return 0; }
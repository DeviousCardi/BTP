#include <stdio.h>
int main(){
    int n,a[100],i,b[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    b[0]=a[0];
    for(i=1;i<100;i++) {
        b[i]=a[b[i-1]];
        printf("%d ",b[i]); }
    return 0; }
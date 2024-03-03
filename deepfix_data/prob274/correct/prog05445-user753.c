#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int ar[n],sos[100];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&ar[i]); }
    sos[0]=1;
    printf("%d ",sos[0]);
    for(i=1;i<=99;i++) {
    sos[i]=ar[sos[i-1]-1];
    printf("%d ",sos[i]); }
    return 0; }
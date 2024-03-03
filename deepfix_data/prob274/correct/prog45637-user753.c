#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int ar[n],sos[n];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&ar[i]); }
    sos[0]=1;
    printf("%d ",sos[0]);
    for(i=1;i<=n;i++) {
    sos[i]=ar[sos[i-1]-1];
    printf("%d ",sos[i]); }
    for(i=1;i<=n;i++) {
    for(j=0;j<=i-1;j++) {
        if(sos[i]==sos[j]) {
        printf("%d",i);
        printf("%d",i-j);
        goto lol; } } }
    lol:
    return 0; }
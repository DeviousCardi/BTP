#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int ar[n],sos[100];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&ar[i]); }
    sos[0]=1;
    for(i=1;i<=99;i++) {
    sos[i]=ar[sos[i-1]-1];
    for(j=0;j<=i-1;j++) {
        if(sos[i]==sos[j]) {
            printf("%d ",i);
            printf("%d",i-j);
            break; } }
    if(sos[i]==sos[j])
        break; }
    return 0; }
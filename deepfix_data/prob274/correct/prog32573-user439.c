#include <stdio.h>
int main(){
    int j,k,i,n,t=0;
    scanf("%d",&n);
    int a[104];
    int b[104];
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<=n;i++) {
    b[1]=a[1];
    b[i+1]=a[b[i]]; }
    b[0]=1;
    for(i=0;i<=n;i++) {
        for(j=0;j<=n;j++) {
            if(a[i]==a[j]) {
                t=j;
                k=j-i;
                break; } }
        if(a[i]==a[j])
        break; }
    printf("%d %d",t,k);
    return 0; }
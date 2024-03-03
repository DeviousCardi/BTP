#include <stdio.h>
int main() {
    int n,t=1,k1=0;
    int true=0;
    int a[1000];
    int b[1000];
    b[0]=0;
    int j=1,k;
    scanf("%d",&n);
    a[0]=0;
    for(int i=1;i<n+1;i++) {
        scanf("%d",&a[i]); }
    for(t=1,k=1;t<=n;t++) {
        b[j]=a[k];
        k=a[k];
        j++; }
    for(j=1;j<=n;j++) {
        for(k=j+1;k<=n;k++) {
            if(b[k]==b[j]) {
                k1=k-j;t=k;
                true=1;
                break; } }
        if(true==1)
            break; }
    printf("%d %d",t,k1);
    return 0; }
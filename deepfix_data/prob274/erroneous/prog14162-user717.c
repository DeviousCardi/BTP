#include <stdio.h>
int main() {
    int n,i=0,j,p,k,t;
    scanf("%d\n",&n);
    int a[n],a1[n];
    for(i=0;i<n;i++)
    a1[i]=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=1;
    t=0;j=1;
    for(i=0;i<n&&count<2;i++) {
    for(j=j;j<=n;j++) {
        if(a[i]==p)
            a1[i]++;
        if(a1[i]>1) {
            printf("%d ",j-1);
            break; }
        p=a[p-1]; } }
    return 0; }
#include <stdio.h>
int main() {
    int n,i=0,j,p,k,t;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=1;
    int count=0;
    t=0;j=1;
    for(i=0;i<n&&count<2;i++) {
    for(j=j;j<=n;j++) {
        if(a[i]==p)
        count++;
        if(count>1) {
        printf("%d ",j-1);
        break; }
        p=a[p-1]; } }
    return 0; }
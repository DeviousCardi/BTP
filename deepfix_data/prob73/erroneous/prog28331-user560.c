#include <stdio.h>
int main() {
    int n,m;
    scanf("%d%d\n",&n,&m);
    int num[m];
    int s[n];
    int sum;
    for(i=0;i<n;i=i+1) {
        sum=0;
        for(j=1;j<m;j=j+1) {
            scanf("%d",num[j]);
            sum=sum+n[j]; }
        s[i]=sum; }
    return 0; }
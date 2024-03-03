#include<stdio.h>
int maxtill (int n) {
    int i,j,a[20],m,k;
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    for(j=n-1;j>=0;j--) {
        if(a[n-1]>a[j]) {
        k=j;
        m=maxtill(k)+1;
        break; }
        else
        m=1; }
    return m; }
int main() {
    int n,m;
    scanf("%d",&n);
    m=maxtill(n);
    printf("%d",m);
    return 0; }
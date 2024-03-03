#include <stdio.h>
int sum(int b[],int c,int x,int y) {
    int s=0;
    for(int i=x;i<=y;i++) {
        s=s+b[i]; }
    return s; }
int checksum(int t[],int m,int k) {
    if(k==m-1)
    return 0;
    int sl,sr;
    sl=sum(t,m,0,k);
    sr=sum(t,m,k+1,m-1);
    if(sl==sr)
    return 1;
    if(sl!=sr)
    return checksum(t,m,k+1); }
int main() {
    int n,p;
     p=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(checksum(a,n,p))
    printf("YES");
    else
    printf("NO");
    return 0; }
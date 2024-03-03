#include<stdio.h>
#include<limits.h>
int min(int a[],int m);
int min(int a[],int m) {
    int b,i,j;
    for(i=0;i<m;i++) {
        b=a[i];
        for(j=m-1;j>=i+1;j--) {
            if(a[i]>=a[j]) {
                a[i]=a[j];
                a[j]=b;
                b=a[i]; } } }
    return a[0]; }
int main() {
    int n,m,i,j,a[100],y,k,f,r,ans;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&y);
            r=y;
            if((i==1)&&(j==1)) {
                f=r;
                k=r; }
            if(f<=r) {
                k=r; }
            f=r; }
        a[i-1]=k; }
    ans=min(a,m);
    printf("%d",ans);
    return 0; }
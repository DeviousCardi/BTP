#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else if(a<=b)
    return b; }
int main() {
    int i,j,n,m,a,r,ans;
    scanf("%d %d",&n,&m);
    int c[m+1],s[n+1];
    for(i=1;i<=n;i++) {
        s[0]=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&a);
            c[0]=0;
            c[j]=c[j-1]+a; }
        s[i]=c[m];
        r=max(s[i],s[i-1]);
        ans=max(s[i],r); }
    printf("%d",ans);
    return 0; }
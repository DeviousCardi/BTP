#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int i,j,n,m,a,r;
    scanf("%d %d",&n,&m);
    int c[m+1],s[n+1];
    for(i=1;i<=n;i++) {
        s[0]=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&a);
            c[0]=0;
            c[j]=c[j-1]+a; }
        s[i]=c[m];
        printf("%d\n",s[i]);
        r=max(s[i],s[i-1]); }
    return 0; }
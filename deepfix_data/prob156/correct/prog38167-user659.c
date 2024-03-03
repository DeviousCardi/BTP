#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else if(a<=b)
    return b; }
int main() {
    int i,j,n,m,a,r;
    scanf("%d %d",&n,&m);
    int c[m+1],s[n+3];
    for(i=1;i<=n;i++) {
        r=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&a);
            c[0]=0;
            c[j]=c[j-1]+a; }
        s[i]=c[m];
        r=max(s[i],r); }
    printf("%d",r);
    return 0; }
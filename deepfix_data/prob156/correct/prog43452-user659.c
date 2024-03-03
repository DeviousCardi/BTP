#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else if(a<=b)
    return b; }
int main() {
    int i,j,n,m,a,r;
    scanf("%d %d",&n,&m);
    int c[m+1],s[n+1];
    for(i=2;i<=n+1;i++) {
        s[0]=0;s[1]=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&a);
            c[0]=0;
            c[j]=c[j-1]+a; }
        s[i]=c[m];
        printf("%d\n",s[i]);
        r=max(s[i+1],max(s[i],s[i-1])); }
    printf("%d",r);
    return 0; }
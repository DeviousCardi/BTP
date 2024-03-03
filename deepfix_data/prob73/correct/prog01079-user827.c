#include <stdio.h>
int main() {
    int n,m,i,j,big;
    scanf("%d%d",&n,&m);
    int a[n+1][m+1],s[n+1];
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&a[i][j]); } }
    for(i=1;i<=n;i++) {
        s[i]=0; }
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            s[i]=s[i]+a[i][j]; } }
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(s[i]>=s[j]) {
                big=s[i];
                s[i]=s[j];
                s[j]=big; } } }
    printf("%d",s[i]);
    return 0; }
#include <stdio.h>
int main() {
    int n,m,i,j,s1=0,s2=0,h[m],h1[m],t[n];
    scanf("%d %d",&n,&m);
    for(j=1;j<=n;j++) {
        s1=0;
        for(i=1;i<=m;i++) {
            scanf("%d",&h[i ]);
            s1=s1+h[i]; }
        t[j]=s1; }
    if(s1>s2)
        printf("%d",s1);
    else
        printf("%d",s2);
    return 0; }
#include <stdio.h>
int main() {
    int n,m,i,j,s1=0,s2=0,h[m],h1[m],t[n],k;
    scanf("%d %d",&n,&m);
    for(j=1;j<=n;j++) {
        s1=0;
        for(i=1;i<=m;i++) {
            scanf("%d",&h[i ]);
            s1=s1+h[i]; }
        t[j]=s1; }
    for(j=1;j<=n;j++) {
        if(t[j]>=k)
            k=t[j];
        for(i=j+1;i<=n;i++) {
            if(t[j]>t[i])
                k=t[j];
            else
                k=t[i]; } }
    printf("%d",k);
    return 0; }
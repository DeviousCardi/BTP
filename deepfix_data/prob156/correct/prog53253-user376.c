#include <stdio.h>
int main() {
    int n,m,i,j,s1=0,k=0;
    scanf("%d %d",&n,&m);
    int h[m],t[n];
    for(j=0;j<=n-1;j++) {
        s1=0;
        for(i=0;i<=m-1;i++) {
            scanf("%d\n",&h[i ]);
            s1=s1+h[i]; }
        t[j]=s1; }
    for(j=0;j<=n-1;j++) {
        if(k>=t[j])
        t[j]=k;
        for(i=j+1;i<=n;i++) {
            if(t[j]>t[i])
                k=t[j];
            else
                k=t[i]; } }
    printf("%d",k);
    return 0; }
#include <stdio.h>
int main(){
    int i,n,f,s,d,p,m,j;
    f=-5;
    s=-5;
    scanf("%d",&n);
    p=2*n;
    int a[p];
    for(i=0;i<p;i++){
        scanf("%d",&a[i]); }
    int dist[p];
    for(j=0;j<p;j++){
        for(i=0;i<p;i++){
            if((f==-5)&&(a[j]==a[i]))
                f=i;
            else if((s==-5)&&(n==a[i]))
                s=i; }
    dist[j]=s-f;
    f=-5;
    s=-5; }
    m=dist[0];
    for(i=0;i<p;i++){
        if(dist[i]<=m)
            m=dist[i]; }
    printf("%d",d);
    return 0; }
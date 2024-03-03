#include <stdio.h>
int max(a,b){
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int s[m],sum[n],c=0;
    for(int i=0;i<n;i++){
        sum[i]=0;
        for(int j=0;j<m;j++){
            scanf("%d",&s[j]);
            sum[i]=sum[i]+s[j]; } }
    for(int i=0;i<n;i++){
        c=max(c,sum[i]); }
    printf("%d",c);
    return 0; }
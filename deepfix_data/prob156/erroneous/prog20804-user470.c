#include <stdio.h>
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int s[m],sum[n],max,c=0;
    for(i=0;i<n;i++){
        sum[i]=0;
        for(j=0;j<m;j++){
            scanf("%d",s[j]);
            sum[i]=sum[i]+s[j]; } }
    for(i=0;i<n;i++){
        max=max(c,sum[i]); }
    printf("%d",max)
    return 0; }
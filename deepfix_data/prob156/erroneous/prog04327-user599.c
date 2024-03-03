#include <stdio.h>
int max(int a,int b);
int main() {
    int n,m,mg[10000],s[10000],i,j,maximum;
    scanf("%d%d\n",&n,&m);
    for(i=0;i<n;i++) {
        s[i]=0;
        for(j=0;j<m;j++) {
            scanf("%d",&mg[j]);
            s[i]=s[i]+mg[j]; } }
    for(i=0;i<n-1;i++){
        maximum=0;
        maximum=max(maximum,max(s[i],s[i+1])) }
    printf("%d",maximum);
    return 0; }
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
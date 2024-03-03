#include <stdio.h>
int max(a,b){
    if(a>b)
        return a;
    else
        return b; }
int main() {
    int n,m,x,i;
    scanf("%d %d\n",&n,&m);
    x=m*n;
    int a[x];
    int s[n];
    for(i=0;i<x;i++){
        scanf("%d",&a[i]); }
    int l=0;
    for(int k=0;k<n;k++){
        int sum=0;
        for(int y=l;y<m+l;y++){
            sum=sum+a[y]; }
        s[k]=sum;
        l=l+3; }
    for(int g=0;g<n;g++){
        m=max(n,s[g]);
        n=m; }
    printf("%d",n);
    return 0; }
#include <stdio.h>
int max(a,b){
    if(a>b)
        return a;
    else
        return b; }
int main() {
    int n,m,x=m*n;
    scanf("%d %d",&n,&m);
    int a[x];
    int s[n];
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]); }
    int sum=0,l=0;
    for(int j=0;j<n;j++){
        for(int k=l;k<m;k++){
            sum=sum+a[k]; }
        s[j]=sum;
        l=l+m; }
    int p=s[0],q;
    for(int r=0;r<n-1;r++){
        q=max(p,s[r+1]);
        p=q; }
    printf("%d",p);
    return 0; }
#include<stdio.h>
#include<limits.h>
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
int min(int a,int b){
    if(a>b)
    return b;
    else
    return a; }
int main() {
    int m,n,c;
    scanf("%d %d",&n,&m);
    int a[n+2],b[m+2];
    scanf("%d ",&a[1]);
    b[1]=a[1];
    for(int i=1;i<=m;i++){
        for(int j=2;j<=n;j++){
            scanf("%d ",&a[j]); }
        for(int k=1;k<=n;k++){
            b[i]=max(b[i],a[k]); } }
    c=b[1];
    for(int w=1;w<=m;w++){
        c=min(c,b[w]); }
    printf("%d",c);
    return 0; }
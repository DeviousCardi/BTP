#include<stdio.h>
#include<limits.h>
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int m,n,M,i,j;
    scanf("%d%d",&n,&m);
    int a[n*m],mx[m];
    for(i=0;i<n*m;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    mx[i]=a[i*n];
    for(i=0;i<m;i++)
    for(j=i*n;j<(i+1)*n;j++)
    mx[i]=max(mx[i],a[j]);
    M=mx[0];
    for(i=0;i<m;i++)
    M=max(M,mx[i]);
    printf("%d",M);
    return 0; }
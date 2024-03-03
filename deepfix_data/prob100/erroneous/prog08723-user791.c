#include<stdio.h>
#include<limits.h>
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int m,n,M;
    scanf("%d%d",&n,&m);
    int a[n*m],m[m];
    for(i=0;i<n*m;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    m[i]=a[i*n];
    for(i=0;i<m;i++)
    for(j=i*n;j<(i+1)*n;j++)
    m[i]=max(m[i],a[j]);
    M=m[0];
    for(i=0;i<m;i++)
    M=max(M,m[i]);
    printf("%d",M);
    return 0; }
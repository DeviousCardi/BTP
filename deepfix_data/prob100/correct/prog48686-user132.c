#include<stdio.h>
#include<limits.h>
int max(int a,int b) {
    if(a>=b)
    return a;
    else
    return b; }
int min(int x,int y) {
    if(x>=y)
    return y;
    else
    return x; }
int main() {
    int n,m,k=0,c;
    scanf("%d%d",&n,&m);
    int arr[m*n],row[m];
    for(k=0;k<m*n;k=k+1)
    scanf("%d",&arr[k]);
    for(int i=0;i<m;i=i+1) {
        for(int j=1;j<n;j=j+1) {
          c=max(arr[n*i],arr[n*i+j]);
          arr[n*i]=c; }
        row[i]=c; }
    for(k=0;k<m;k=k+1) {
        c=min(row[0],row[k]);
        row[0]=c; }
    printf("%d",&c);
    return 0; }
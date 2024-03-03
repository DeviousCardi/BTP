#include<stdio.h>
#include<limits.h>
int n,m;
int row() {
    int a[1000],x,j,l=0;
    for(j=0;j<n;j++)
    scanf("%d",&a[j]);
    for(j=0;j<n;j++) {
        if(a[j]<=a[l])
        l=j; }
    x=a[l];
    return x; }
int main() {
    int n,m,l=0,i,y,b[10000];
    scanf("%d %d \n",&n,&m);
    for(i=0;i<m;i++)
    b[i]=row();
    for(i=0;i<m;i++) {
        if(b[i]<=b[l])
        l=i; }
    y=b[l];
    printf("%d",y);
    return 0; }
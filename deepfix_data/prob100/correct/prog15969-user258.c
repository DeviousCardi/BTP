#include<stdio.h>
#include<limits.h>
int max(int a,int b){
    if(a<b)
    return a;
    else
    return b; }
int main() {
 int n,m,i,j,k,y;
 int x=0;
 int c[100];
 scanf("%d %d",&n,&m);
 for(i=1;i<=n;i++){
     for(j=0;j<m;j++){
         scanf("%d",&c[j]);
         y=max(c[j],x);
         x=y; }
     printf("%d ",x); }
    return 0; }
#include<stdio.h>
#include<limits.h>
int max(int,int);
int min(int,int);
int max(int a,int b){
    if(a<=b)
    return b;
    else
    return a; }
int min(int a,int b){
    if(a<b)
    return a;
    else
    return b; }
int main() {
 int n,m,i,j,y,z,k;
 int x=0;
 scanf("%d %d",&n,&m);
 int c[m][n];
 int f[m];
 for(i=0;i<m;i++){
     for(j=0;j<n;j++){
         scanf("%d",&c[i][j]);
         y=max(c[i][j],x);
         x=y; }
     f[i]=x; }
 for(k=0;k<m;k++){
     z=min(f[k],f[k+1]);
     f[k]=z; }
 printf("%d",f[k-1]);
    return 0; }
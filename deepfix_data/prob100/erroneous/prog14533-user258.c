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
    return a+b-max(a,b); }
int main() {
 int n,m,i,j,y,z,k;
 int x=0;
 int c[i][j];
 scanf("%d %d",&n,&m);
 int f[m];
 for(i=0;i<m;i++){
     for(j=0;j<n;j++){
         scanf("%d",&c[j]);
         y=max(c[j],x);
         x=y; }
     f[i]=x; }
 for(k=0;k<m;k++){
     z=min(f[k],f[k+1])
     f[k+1]=z; }
 printf("%d",f[k+1]);
    return 0; }
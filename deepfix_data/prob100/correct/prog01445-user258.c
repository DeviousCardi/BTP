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
 int c[100];
 scanf("%d %d",&n,&m);
 for(k=0;k<m-1;k++){
 for(i=0;i<m;i++){
     for(j=0;j<n;j++){
         scanf("%d",&c[j]);
         y=max(c[j],x);
         x=y; }
     printf("%d ",x); }
 z=min(x,x); }
printf("%d",z);
    return 0; }
#include <stdio.h>
#include <stdlib.h>
int max(int,int);
int main() {
int n,i,j,l,m,x,k;
scanf("%d",&n);
int a[10000];
for(i=0;i<n;i++){
  scanf("%d",&a[i])  ; }
int count[n];
for(l=0;l<n;l++){
count[l]=0; }
for(j=0;j<n;j++){
if(a[j]==a[j+1]){
    count[j] =count[j] +1; }
    else continue; }
m=max(count[0],count[1]);
for(x=2;x<n;x++){
m=max(count[x],m); }
for(k=n;k>=0;k=k-1){
if(m==count[k]){
printf("%d",a[k]);
break; } }
 return 0; }
int max(int a,int b){
if(a>b){ return a;}
else return b; }
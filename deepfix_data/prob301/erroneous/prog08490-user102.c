#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,l;
scanf("%d",&n);
int ai[10000];
for(i=0;i<n;i++){
  scanf("%d",&a[i])  ; }
int count[n];
for(l=0;l<n;l++){
count[l]=0; }
for(j=0;j<n;j++){
if(ai[j]==ai[j+1]){
    count[j] =count[j] +1; }
    else continue; }
m=max(count[0],count[1]);
for(x=2;x<n;x++){
m=max(count[x],m); }
for(k=1;k<n;k++){
if(m=count[k])
printf("%d",a[k]); } }
return 0; }
int max(int a,int b){
if(a>b){ return a;}
else return b; }
#include<stdio.h>
#include<limits.h>
int arr[100];
int n,k,x,i,j,a,y,d,max,e,b;
int max=INT_MIN;
int c[100];
int x=0;
int getInversions(int l,int r) {
    for (y=l;y<n-r+1;y++){
        x=0;
      for (d=y;d<y+r;d++){
          if (arr[y]>arr[d]){
              x=x+1; } }
      if (x>max){
          max=x; }
      c[y]=max; }
  for (i=0;i<n-r+1;i++){
      if (c[i]>b){
          b=c[i]; } }
  return b; }
int main() {
    for (i=0;i<n;i++){
      scanf("%d",&arr[i]); }
    scanf("%d",&n);
    scanf("%d",&k);
    for (i=0;i<n-k+1;i++){
    e=getInversions(i,k); }
    printf("%d",e);
    return 0; }
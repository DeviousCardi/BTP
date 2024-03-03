#include<stdio.h>
int arr[100];
int n,k,x,i,j,c,a,y;
int c[n-k+1];
int x=0;
int getInversions(int l,int r) {
  for (i=0;i<n;i++){
      scanf("%d",&arr[i]); }
    for (y=0;y<n-r+1;y++){
        x=0;
      for (d=y;d<y+r;d++){
          if (arr[y]>arr[d]){
              x=x+1; } }
      if (x>max){
          max=x; }
      c[y]=max; }
  return max; }
int main() {
    scanf("%d",&n);
    scanf("%d",&k);
    for (i=0;i<n-k+1;i++){
    c=getInversions(i,r); }
    return 0; }
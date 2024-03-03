#include<stdio.h>
int arr[100];
int n,k,x,i,j,c,a;
int x=0;
int getInversions(int l,int r) {
  for (i=0;i<l;i++){
      scanf("%d",&arr[i]); }
  for (a=l;a<=l+r-1;a++){
    for (i=0;i<l;i++){
      for (j=i;j<l;j++){
          if (arr[i]>arr[j]){
              x=x+1; } } }
  return x; } }
int main() {
    scanf("%d",&n);
    scanf("%d",&k);
    c=getInversions(k,n);
    printf("%d",c);
    return 0; }
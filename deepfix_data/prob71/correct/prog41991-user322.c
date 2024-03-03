#include <stdio.h>
int main() {
  int n;
  scanf("%d\n",&n);
  int i,a[n];
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  int j,c,s;
  float r,t;
  for(i=0;i<n;i++){
      c=0;
      for(j=0;j<n;j++){
          if(a[i]>=a[j])
          c=c+1; }
      if(n%2!=0){
          if(c==(n+1)/2)
          s=a[i]; }
      if(n%2==0){
          if(c==n/2)
          r=a[i];
          if(c==(n+2)/2)
          t=a[i]; } }
  float p;
  if(n%2==0){
      p=(r+t)/2;
      printf("%.1f",p); }
  if(n%2!=0){
      printf("%d",s); }
    return 0; }
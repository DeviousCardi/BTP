#include <stdio.h>
int main() {
  int n,i,j,temp;
  scanf("%d",&n);
  int count[n];
  char k;
  int a[n];
  for(i=0;i<n;i++){
      scanf("%d",&a[i]);  scanf("%c",&k); }
  for(i=0;i<n;i++){
      temp=a[i];count[i]=0;
      for(j=0;j<n;j++){
          if(a[i]==temp){
              count[i]=count[i]+1; } } }
  for(i=0;i<n;i++){
      if(a[i]!=count[i]) {printf("no");break} }
  if(i==n) printf("yes");}
    return 0; }
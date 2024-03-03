#include <stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
  int hit[n];
  scanf("%d %d %d",&hit[0],&hit[1],&hit[2]);
  for(i=0;i<=n;i++) {
      if(hit[i]<hit[i+1]&&hit[i+1]>hit[i+2]) {
          count=count+1; }
      else {
          scanf("%d",&hit[i+3]); } }
  printf("%d",count);
    return 0; }
#include <stdio.h>
int main() {
 int n,arr[n],i,t,count[n];
  scanf("%d\n",&n);
  for(i=0;i<n;i++){
      scanf("%d ",&arr[i]); }
  for(t=1;t<=n;t++) count[t-1]=0; {
      for(i=0;i<n;i++){
          if(arr[i]==t){count[t-1]++;} } }
  for(t=1;t<=n;t++){
      if(count[t-1]==2){
          printf("%d\n",t);}
          if(count[t-1]==0){printf("%d",t); } }
    return 0; }
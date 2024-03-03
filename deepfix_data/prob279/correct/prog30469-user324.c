#include <stdio.h>
int main() {
 int n,arr[n],i,t,count[n],j,k;
  scanf("%d\n",&n);
  for(i=0;i<n;i++){
      scanf("%d ",&arr[i]); }
  for(t=1;t<=n;t++) count[t-1]=0; {
      for(i=0;i<n;i++){
          if(arr[i]==t){count[t-1]++;}
      }if(count[t-1]==2){j=t;}
      if(count[t-1]==0){k=t-1;} }
  printf("%d\n",1);
  printf("%d",t-1);
    return 0; }
#include <stdio.h>
int main(){
      int n,w;
      scanf("%d",&n);
      int k;
      k=n;
      int count=0;
      while(n!=0)
      { w=n%10;
        count=count+w;
        n=n/10; }
      printf("%d",(k/(count))*(count)+count);
    return 0; }
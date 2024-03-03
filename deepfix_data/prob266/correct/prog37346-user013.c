#include <stdio.h>
int main(){
      int n,z,w;
      scanf("%d",&n);
      int k;
      k=n;
      int count=0;
      while(n!=0)
      { w=n%10;
        count=count+w;
        n=n/10; }
      z=((k/count)*count)+count;
      printf("%d",z);
    return 0; }
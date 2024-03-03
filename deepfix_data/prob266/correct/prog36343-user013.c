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
      int y;
      z=((k/count)*count);
      y=(2016-z)/count+1;
      z=z+y*count;
      printf("%d",z);
    return 0; }
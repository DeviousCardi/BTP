#include<stdio.h>
#include<limits.h> {
        if min(i<j)
        return i;
        else
        return j; }
int main() {
    int i,p,q,x,max,y;
    scanf("%d%d",&p,&q);
    for (i=0;i<q;i++) {
      for(j=0;j<p;j++) {
          scanf("%d",&x);
          if(j==0)
            max = x;
          else {
              if (x>max)
              max = x; } }
      printf("%d ",max) }
    return 0; }
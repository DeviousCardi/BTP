#include <stdio.h>
int main() {
  int h,p,n;
  scanf("%d\n%d",&h,&p);
  int i=0;
    for(i=0;i<p;i++)
     { scanf("%d",&n); }
       if(n>=2&&n<=100)
          { printf("Yes");}
        else {
              printf("No"); }
     return 0; }
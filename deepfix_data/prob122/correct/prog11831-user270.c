#include <stdio.h>
int main(){
int n,i,j,x;
scanf("%d",&n);
   for (i=1; i<n; i++)
   { scanf("%d",&x);
      if (x==0) continue;
      if (x !=0)
      { printf("no");
        break; }
     printf("yes"); }
    return 0; }
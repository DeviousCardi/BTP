#include <stdio.h>
#include <stdlib.h>
int main() {
         int num[20],i,n;
         scanf("%d",&n);
      for(i=0;i<=n;i++)                                                                                  {
           scanf("%d",&num[i]);
     if(i>=1) {
          if(num[i]<num[i-1])
          {printf("Yes");}
          else
          {printf("No");}
      } }
	return 0; }
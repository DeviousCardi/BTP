#include <stdio.h>
#include <stdlib.h>
int main() {
         int num[20],i,j;
         scanf("%d",&j);
      for(i=0;i<=j;i++)                                                                                  {
           scanf("%d\n",&num[i]);
     if(i>=1) {
          if(num[i]<num[i+1])
          {printf("Yes");}
          else
          {printf("No");}
      printf("\n");
      } }
	return 0; }
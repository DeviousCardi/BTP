#include <stdio.h>
#include <stdlib.h>
int main() {
         int num[20],y,i,j,k,p;
         scanf("%d",&j);
      for(i=0;i<j;i++)
         {  scanf("%d\n",&num[i]);}
      scanf("%d",&k);
      for(i=0;i<k;i++)
     { scanf("%d\n",&y);
        { if((y>=1)&&(y<j-1))
           { if((num[y]<num[y+1])&&(num[y]<num[y-1]))
          {printf("Yes");}
          else
          {printf("No");}}
         else if((y==0)||(y==j-1))
         {if((num[y]<num[y+1])||(num[y]<num[y-1]))
           printf("Yes");
           else
           printf("No");}}
      printf("\n"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
         int num[20],test[20],y,i,j,k;
         scanf("%d",&j);
      for(i=0;i<j;i++)
         {  scanf("%d\n",&num[i]);}
      scanf("%d",&k);
      scanf("%d\n",&test[y]);
         for(i=0;i<j;i++)
        { if((i>=1)&&(i<j-1)&&(i==y))
           { if((num[i]<num[i+1])&&(num[i]<num[i-1]))
          {printf("Yes");}
          else
          {printf("No");}}
         else if(((i==0)||(i==j-1))&&(i==y))
         {if((num[i]<num[i+1])||(num[i]<num[i-1]))
           printf("Yes");
           else
           printf("No");}
      printf("\n"); }
	return 0; }
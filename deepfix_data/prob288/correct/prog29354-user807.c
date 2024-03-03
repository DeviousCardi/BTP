#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
 for(i=1;i<=(n+1)/2;i++)
 {for(j=0;j<i;j++)
  {if((i+j)%2==0)
   {printf("x");}
   else
   {printf("*");}
  }printf("\n");
 }for(i=(n/2)+1;i<=n;i++)
  {for(j=0;j<n;j++)
  {if((i+j)%2==0)
   {printf("x");}
   else
   {printf("*");}
  }printf("\n");
}	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
 for(i=1;i<=(2*n+1)/2;i++)
 {for(j=0;j<i;j++)
  {if((i+j)%2==0)
   {printf("x");}
   else
   {printf("*");}
  }printf("\n");
 }for(i=n+1;i<=2*n+1;i++)
  {for(j=0;j<n-i+1;j++)
  {if((i+j)%2==0)
   {printf("x");}
   else
   {printf("*");}
  }printf("\n");
}	return 0; }
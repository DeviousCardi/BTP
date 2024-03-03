#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i=i+1)
    {if(i<=n+1) {
       for(j=1;j<=n-i;j++)
       {printf(" ");
          if((i+j)%2!=0)
          {printf("*"); }
          else
          {printf("x"); } } } }
	return 0; }
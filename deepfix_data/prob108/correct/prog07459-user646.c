#include <stdio.h>
#include <stdlib.h>
int main() {
       int i,j,n;
       scanf("%d",&n);
      for(i=1;i<=n;i++)
      {printf("*"); }
      for(j=i;j>1;j++)
      {printf(" ");}
      if(j>1){
          printf("*"); }
      printf("\n");
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
     int i,j,k,n;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     { for(j=0;j<2*(n-1);j++)
        if((i==0)&&(j==(n-1)))
          {printf("*\n");}
        if((i+j)==(n-1))
           {printf("*");}
           else if(((j-n+1)>0)&&((j-n+1)==i))
           { printf("*\n");
             break; }
           else printf("$"); }
	return 0; }
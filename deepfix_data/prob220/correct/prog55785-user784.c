#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,k;
    scanf("%d",&n);
    for(i=0;i<(n-1);i++)
    { for(j=0;j<=(2*(n-1));j++) {
          if(((i+j)==(n-1))||((j-n+1)==(i)))
                { printf("*"); }
            else printf("$");
           if((i==0)&&(j==(n-1)))
          {printf("*\n");}
           else if(i==1) {
                       if(j==n-2)
                       printf("*");
                       else if(j==n)
                       { printf("*\n");
             break; } }
          else if((i+j)==(n-1))
           {printf("*");}
           else if(((j-n+1)>0)&&((j-n+1)==i))
           { printf("*\n");
             break; }
           else printf("$"); } }
    for(k=0;k<=(2*(n-1));k++)
     { printf("*"); }
	return 0; }
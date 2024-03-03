#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i=1){
            for(j=1;j<=2*n-1;j++)
            {printf("*");}
       printf("\n"); }
      else
        {for(j=1;j<=2*n-1;j++)
         {if((j==i)||(j==2*n-i))
          printf("*");
          else printf(" ");}
          printf("\n"); } }
	return 0; }
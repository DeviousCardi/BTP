#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j;
scanf("%d",&n);
for (i=1;i<=n;i++){
   if(i<=(n+1)/2)
        { for(j=1;j<=i;j++)
          {if((j==1)||(j==i))
                 printf("*");
            else printf(" "); }
    printf("\n");}
else{for(j=1;j<=n-i+1;j++)
      {if((j==1)||(j==i))
                 printf("*");
            else printf(" "); }
    printf("\n");     } }
	return 0; }
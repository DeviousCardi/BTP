#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
     if(i<=(j+1)/2)
   { for(k=1;k<=(j+1)/2;k++)
        if((k=(j+1)/2)||(k=j-(i+1)))
        {printf("*");}
        else
       { printf(" ");}
       printf("\n");}
	return 0; }
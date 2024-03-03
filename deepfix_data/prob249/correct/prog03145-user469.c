#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
     if(i<=(j+1)/2)
     { for(k=i;k<(j+1)/2;k++)
      printf(" ");
    printf("*");}
	return 0; }
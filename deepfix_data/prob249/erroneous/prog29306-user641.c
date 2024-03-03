#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=(n+1)/2;i++)
        {for(j=1;j<=(n+1)/2;j++)
          {if (j==(n+1)/2)
              printf("*");
          else if ((i+j)==((n+1)/2+1))
              printf("*");
          else
              printf(" ");}
        printf("\n");}
    for(i=(n+1)/2+1;i<=n;i++)
        {for(j=1;j<=(n+1)/2;j++)
          {if (j==(n+1)/2) {
              printf("*"); }
          else if (j==i-((n-1)/2) {
              printf("*"); }
          else {
              printf(" "); }
        printf("\n");
	return 0; }
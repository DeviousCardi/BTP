#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[10][10];
    int i,j,k;
    scanf("%d",&h);
    for(i=0;i<h;i++)
     for(j=0;j<h;j++)
      a[i][j]='*';
    for(i=0;i<h;i++)
     for(j=0;j<h;j++) {
         if(i==j||i+j==h-1)
          printf("%c",a[i][j]);
         else
          printf(" "); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j;
scanf("%d",&n);
for (i=1;i<=n;i++){
for(j=1;j<=(n+1)/2;j++)
  {if((j==1)||(j==i)){
      printf("%c",'42');}
      else printf("%c",'32');
  } printf("\n"); }
	return 0; }
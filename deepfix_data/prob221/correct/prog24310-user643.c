#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    for(k=1;k<=2*n-1;k++){
	    printf("%c",'*'); } }
	   printf("\n");
	  for(j=1;j<=n;j++){
	      printf("%c",' ');
	      printf("%c",'*');
	      for(m=n-1;m>=1;m++){
	          printf("%c",' ');
	          printf("%c",'*'); } }
	   printf("\n");
	return 0; }
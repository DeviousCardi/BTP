#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,r,c,sp;
	scanf("d",&n)
	for(r=1;r<=n;r++) {
	   for(sp=n-r;sp>=1;sp--)
	     printf(" ");
	     for(c=1;c<=r;c++)
	     printf("%d",n%10);
	     for(c=r-1;c>=1;c--)
	     printf("%d",n%10);
	     printf("\n"); }
      for(r=1;r<=n;r++) {
          for(sp=r;sp>=1;sp--)
          printf(" ");
          for(c=1;c<=(n-r);c++)
          printf("%d",n%10);
          for(c=n-r-1;c>=1;c--)
          printf("%d",n%10); }
      getch();
	return 0; }
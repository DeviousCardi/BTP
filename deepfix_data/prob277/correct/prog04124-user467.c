#include <stdio.h>
#include <stdlib.h>
int main() {
             int n,x,y,b;
             scanf("%d",&n);
             for(x=n;x>=1;x--)
             {   b=x-2;
                 for(y=1;y<=b;y++) {
                     printf("x"); }
                 printf("\n"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	                int num,x,z,i;
	                scanf("%d",&num);
	                for(x=1;x<=num;x++) {
	                    for(z=num-x;z>=1;z--)
	                     printf(" ");
	                     for (i=num-x+1;i<=num;i++)
	                     printf("%d",i%10);
	                   printf("\n"); }
	return 0; }
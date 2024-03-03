#include <stdio.h>
#include <stdlib.h>
int main() {
                    int num,i,j,k;
                    scanf("%d",&num);
                    for(i=num;i>=1;--i)
                       {   for(k=0;k<num-i;++k)
                       printf(" ");
                       for(j=1;j<=2*i-1;++j)
                       printf("*");
                       for(j=0;j<i-1;++j)
                       printf("*");
                       printf("\n"); }
	return 0; }
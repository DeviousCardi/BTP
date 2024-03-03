#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k,s;
    s=0;
    scanf("%d",&h);
    for(i=h;i>1;i=i-2) {
        for(k=1;k<=s;k++)
            printf(" ");
            s=s+1;
        for(j=i;j>=1;j--)
        printf("*");
        printf("\n"); }
      for(i=1;i<=h;i=i+2) {
         for(k=s;k>=0;k--)
        printf(" ");
        s=s-1;
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n"); }
	return 0; }
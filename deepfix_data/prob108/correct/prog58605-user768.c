#include <stdio.h>
#include <stdlib.h>
int main() {
 int n,i,j;
 scanf("%d",&n);
 int k= n%2 + 1;
    for(i=1;i<=((n+1))/2;i++) {
       for(j=1;j<=i;j++) {
           if((j%10)==1 || (j%10)==k)
            printf("*");
           else
            printf(" "); }
     printf("\n"); }
    for(i=((n+3)/2);(i>((n+1)/2)&&(i<=n));i++) {
        for(j=1;j<=(n+1-i);j++) {
           if((j%10)==1 || (j%10)==k)
            printf("*");
           else
            printf("  "); }
        printf("\n"); }
	return 0; }
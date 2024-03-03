#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k,l;
    scanf("%d", &n);
    for(i=1; i<=n+1; i++)
    {   for(l=n; l>=i; l--)
         printf(" ");
        for(j=1, k=i; j<=i; j++, k--)
        { if(i%2==0)
          { if((k%2) != 0)
             printf("*");
            else
             printf("x"); }
          else
          { if((k%2) == 0)
             printf("*");
            else
             printf("x"); } }
    printf("\n"); }
    for(i=1; i<=n; i++)
    {   for(l=1; l<=i; l++)
         printf(" ");
        for(j=n, k=1; j>=i; j--, k++) {
            if((k%2) == 0)
             printf("*");
            else
             printf("x"); }
    printf("\n"); }
	return 0; }
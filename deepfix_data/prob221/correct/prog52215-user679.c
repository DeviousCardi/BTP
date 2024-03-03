#include <stdio.h>
#include <stdlib.h>
int main()
{   int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++) {
        printf("*"); }
    printf("\n");
    for(i=2;i<=n;i++) {
        for(j=1;j<=2*n-1;j++)
        {   if(i+j<=10) {
                if(i+j==2*i||i+j==2*n)
                printf("*");
                else
                printf(" "); } }
        printf("\n"); }
	return 0; }
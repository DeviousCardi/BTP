#include <stdio.h>
#include <stdlib.h>
int main ()   {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i++)  {
      for(j=1;j<=n+1;j++)  {
     if (i<=n+1) {
     if (j<=5-i) {
    printf("0"); }
     else       {
         if ((i+j)%2==0)
         printf("*");
         else
         printf("x"); } }
        else {
        if (j<=i-5) {
            printf(" "); }
            else {
                if ((i+j)%2==0)
                printf("*");
                else
                printf("x"); }
        } }
         printf("\n"); }
    return 0; }
#include <stdio.h>
#include <stdlib.h>
int main () { int n,i,j,k;
              scanf ("%d",&n);
              for (i=0;i<n;i++)
              { for (k=i;k<n;k++)
              {printf (" ");}
              for (j=n-i;j<=n+i;j++)
              {printf ("%d",j%10);} }
              printf ("\n");
    return 0; }
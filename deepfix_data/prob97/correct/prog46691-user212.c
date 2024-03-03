#include <stdio.h>
#include <stdlib.h>
int main() { int n,i,j,k;
            scanf ("%d",&n);
            for(i=0;i<n;i++)
                for(j=n-i;j<=n+i;j++)
               {{for(k=0;k<2*n-1;k++)
             {printf (" "); printf("%d",j%10);}
                printf("\n");
            }}
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x[20];
    int i=0,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
	    { scanf("%d",&x[i]); }
	for(i=0;i<n;i++)
        { if(i==0)
             { if(x[i]<x[i+1])
               printf("Yes\n");
               else
               printf("No\n"); }
          else if(i==n-1)
             { if(x[i]<x[i-1]);
               printf("Yes");
               else
               printf("No"); }
          else if(i>=1 && i<n-1)
              { if(x[i]<x[i-1] && x[i]<x[i+1])
                printf("Yes");
                else
                printf("No"); } }
	return 0; }
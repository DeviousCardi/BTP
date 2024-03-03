#include <stdio.h>
#include <stdlib.h>
int main() {
    int x[20],a[20];
    int t,i=0,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
	    { scanf("%d",&x[i]); }
	scanf("%d",&t);
	for(i=0;i<t;i++)
	    { scanf("%d",&a[i]); }
	 for(i=0;i<t;i++)
	    { if(a[i]==0)
             { if(x[a[i]]<x[a[i]+1])
               printf("Yes\n");
               else
               printf("No\n"); }
          else if(a[i]==n-1)
             { if(x[a[i]]<x[a[i]-1])
               printf("Yes\n");
               else
               printf("No\n"); }
          else if(a[i]>=1 && a[i]<n-1)
              { if(x[a[i]]<x[a[i]-1] && x[a[i]]<x[a[i]+1])
                printf("Yes\n");
                else
                printf("No\n"); } }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, t, a[20];
    scanf("%d", &n);
    for(i=0; i<n; i++)
      scanf("%d", &a[i]);
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {  scanf("%d", &j);
       if(n==1)
         printf("Yes\n");
         else {
        if(j>0 && j<n-1)
          { if(a[j]<a[j-1] && a[j]<a[j+1])
             printf("Yes\n");
            else printf("No\n"); }
          else if(j==0)
       { if(a[0]<a[n-1] &&a[0]<a[1])
           printf("Yes\n");
         else printf("No\n"); }
       else if(j==n-1)
       { if(a[n-1]<a[n-2] && a[n-1]<a[0])
           printf("Yes\n");
         else printf("No\n"); } } }
	return 0; }
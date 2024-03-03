#include <stdio.h>
#include <stdlib.h>
int main() {
            int n,i;
            scanf("%d\n",&n);
            int a[n];
            for (i=0;i<n;i++);
           { scanf ("%d\n",&a[i]);}
           for (i=0;i<n-1;i++)
           {if (a[i]>a[i+1]&& a[i]>a[i-1])
           {printf ("Yes\n");
               break; }
           else
           {printf("No\n");}}
	return 0; }
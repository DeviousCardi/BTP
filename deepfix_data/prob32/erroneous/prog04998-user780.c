#include <stdio.h>
#include <stdlib.h>
int main()
{   int i,n,a[20];
    int k=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
        if(a[0]<a[1] || a[n-1]<a[n-2]) {
               printf("Yes\n");
                k=0; }
        else
             for(i=1;i<(n-1);i++) {
                if(a[i]<a[i-1] && a[i]<a[i+1])
                   printf("Yes\n");
                    k=0;
                   break; }
           if(k==1)
           printf("No\n"); } }
	return 0; }
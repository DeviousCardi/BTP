#include <stdio.h>
#include <stdlib.h>
int main()
{   int i,n,a[20];
    int k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<(n-1);i++) {
        if(a[0]<a[1]&&a[n-1]<a[n-2])
        printf("Yes");
        else {
        if(a[i]<a[i-1]&&a[i]<a[i+1])
        printf("Yes");
        k=1;
        break; }
          if(k==1)
           printf("Yes");
          else
           printf("No"); }
	return 0; }
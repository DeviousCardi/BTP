#include <stdio.h>
#include <stdlib.h>
int main()
{ int n,i,j, a[n],sum;
scanf("%d",&n);
for (i=0;i<n;i++) {
    scanf("%d",&a[i]); }
scanf("%d", &sum);
for(i=1;i<n;i++) {
    for( j=i+1;j<n;j++)
   { if(a[i]+a[j]==sum)
       printf("%d""%d",a[i],a[j]); } }
	return 0; }
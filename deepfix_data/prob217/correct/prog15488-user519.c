#include <stdio.h>
#include <stdlib.h>
int main()
{ int n,i,j, a[n],o[n],sum;
scanf("%d",&n);
for (i=0;i<n;i++) {
 o[i]=   scanf("%d",&a[i]); }
scanf("%d", &sum);
for(i=0;i<n-1;i++) {
    for( j=i+1;j<n;j++)
   { if((o[i]+o[j])==sum)
       printf("%d""%d",a[i],a[j]); } }
	return 0; }
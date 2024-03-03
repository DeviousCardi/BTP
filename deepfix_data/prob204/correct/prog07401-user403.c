#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,a[10],q=0;
   for (i=1;i<=3;i++);
   scanf("%d",&a[i]);
   for (i=1;i<=n;i++)
   {if (a[i]==a[n-i+1])
       q=1;
       else
       q=0; }
if (q==1)
printf("YES");
else
printf("NO");
	return 0; }